#include "ReflectionCoefficientsCalculator.h"

ReflectionCoefficientsCalculator::ReflectionCoefficientsCalculator(const RefractiveIndexCalculator& iRICalculator)
	: _riCalculator{ iRICalculator }
{
}

void ReflectionCoefficientsCalculator::calculateAmplitudeReflection()
{
	const auto& init_params = InputParametersSingleton::getInstance();
	const auto& N = _riCalculator.getRefractiveIndex();


	if (N.size() == 0) {
		// spdlog::error("<ReflectionCoefficientsCalculator>: calculate N before REFLECTION calculation!");
		return;
	}

	_r12.resize(N.size());
	_r23.resize(N.size());

	_r12 = init_params->N_air - N / (init_params->N_air + N);
	_r23 = N - init_params->N_m / (N + init_params->N_m);
}

void ReflectionCoefficientsCalculator::calculateIntensityReflection()
{
	if (_r12.size() == 0) {
		return;
	}

	R12.resize(_r12.size());
	R23.resize(_r23.size());

	constexpr auto coeff_setter = [](const std::complex<double>& r) { return (r * conj(r)).real(); };
	std::transform(begin(_r12), end(_r12), begin(R12), coeff_setter);
	std::transform(begin(_r23), end(_r23), begin(R23), coeff_setter);
}

void ReflectionCoefficientsCalculator::calculateAmplitudePhase() {
	if (_r12.size() == 0) {
		return;
	}
	_phi12.resize(_r12.size());

	constexpr auto phase_setter = [](const std::complex<double>& r) { return r.imag() / r.real(); };
	std::transform(begin(_phi12), end(_phi12), begin(_phi12), phase_setter);
}


void ReflectionCoefficientsCalculator::calculate() {
	calculateAmplitudeReflection();
	calculateIntensityReflection();
	calculateAmplitudePhase();
}

const RealValues& ReflectionCoefficientsCalculator::getAmpPhase12() const {
	return _phi12;
}

const ComplexValues& ReflectionCoefficientsCalculator::getAmpCoeff12() const {
	return _r12;
}

const ComplexValues& ReflectionCoefficientsCalculator::getAmpCoeff23() const {
	return _r23;
}

const RealValues& ReflectionCoefficientsCalculator::getIntensityCoeff12() const {
	return R12;
}

const RealValues& ReflectionCoefficientsCalculator::getIntensityCoeff23() const {
	return R23;
}



