#include "OpticalDensityCalculator.h"


OpticalDensityCalculator::OpticalDensityCalculator(const AbsorptionCoeffCalculator& iACCalculator, const ReflectionCoefficientsCalculator& iRCCalculator, const RefractiveIndexCalculator& iRICalculator)
	: _acCalculator{ iACCalculator }, _rcCalculator{ iRCCalculator }, _riCalculator{ iRICalculator }
{
}


void OpticalDensityCalculator::calculate() {
	calculateOpticalDensity();
	calculateFilmTransmission();
	calculateOpticalDensityInterference();
}


void OpticalDensityCalculator::calculateOpticalDensity() {
	const auto& a = _acCalculator.getAbsCoeff();

	if(a.size() == 0) {
		// spdlog::error("<OpticalDensityCalculator>: calculate ABSORPTION before D calculation!");
		return;
	}

	const auto& init_params = InputParametersSingleton::getInstance();
	const auto d = init_params->d;

	D_ = a * d;
}

void OpticalDensityCalculator::calculateFilmTransmission() {

	if (D_.size() == 0) {
		return;
	}

	const auto& n = _riCalculator.getRealPart();
	if(n.size() == 0) {
		// spdlog::error("<OpticalDensityCalculator>: calculate N before T calculation!");
		return;
	}

	const auto& R12 = _rcCalculator.getIntensityCoeff12();
	if (R12.size() == 0) {
		// spdlog::error("<OpticalDensityCalculator>: calculate R12 before T calculation!");
		return;
	}

	const auto& init_params = InputParametersSingleton::getInstance();
	const auto d = init_params->d;
	const auto& freq = init_params->freq;
	const auto phase = 2.0 * d * n * freq;
	const auto& R23 = _rcCalculator.getIntensityCoeff23();

	const auto numerator = (1.0 - R12) * (1.0 - R23) * std::exp(-D_);
	const auto R12_times_R23 = R12 * R23;
	const auto denominator = 1.0 + R12_times_R23 + 2.0 * std::sqrt(R12_times_R23) * std::exp(-2.0 * D_) * std::cos(phase);
	T_ = numerator / denominator;
	
}


void OpticalDensityCalculator::calculateOpticalDensityInterference() {
	A_ = -std::log(T_);
}


const RealValues& OpticalDensityCalculator::getOpticalDensity() const {
	return D_;
}

const RealValues& OpticalDensityCalculator::getOpticalDensityInterference() const {
	return A_;
}

const RealValues& OpticalDensityCalculator::getFilmTransmission() const {
	return T_;
}