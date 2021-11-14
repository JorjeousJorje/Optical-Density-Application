#include "AbsorptionCoeffCalculator.h"


AbsorptionCoeffCalculator::AbsorptionCoeffCalculator(const RefractiveIndexCalculator& iRICalculator)
	: _riCalculator{ iRICalculator }
{
}

void AbsorptionCoeffCalculator::calculate() {
	const auto k = _riCalculator.getImPart();

	if (k.size() == 0) {
		// spdlog::error("<AbsorptionCoeffCalculator>: calculate N before ABSORPTION calculation!");
		return;
	}
	_absCoeff.resize(k.size());

	const auto& init_params = InputParametersSingleton::getInstance();
	const auto& freq = init_params->freq;
	constexpr auto abs_setter = [](const double iK, const double iV) { return 4.0 * pi * iK * iV; };
	std::transform(begin(k), end(k), begin(freq), begin(_absCoeff), abs_setter);
}


const RealValues& AbsorptionCoeffCalculator::getAbsCoeff() const {
	return _absCoeff;
}


