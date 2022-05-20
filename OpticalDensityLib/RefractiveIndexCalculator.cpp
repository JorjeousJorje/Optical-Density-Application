#include "RefractiveIndexCalculator.h"



RefractiveIndexCalculator::RefractiveIndexCalculator(const DielectricPermeabilityCalculator& iDPCalculator)
	: _dpCalculator{ iDPCalculator }
{
}

void RefractiveIndexCalculator::calculate() {
	const auto epsilon = _dpCalculator.getDielectricPermeability();
	const auto& init_params = InputParametersSingleton::getInstance();
	const auto& freq = init_params->freq;

	_n.resize(freq.size());
	_k.resize(freq.size());
	N_ = std::sqrt(epsilon);

	for (auto i = 0u; i < N_.size(); ++i) {
		_n[i] = N_[i].real();
		_k[i] = N_[i].imag();
	}
}

const ComplexValues& RefractiveIndexCalculator::getRefractiveIndex() const {
	return N_;
}

const RealValues& RefractiveIndexCalculator::getRealPart() const {
	return _n;
}

const RealValues& RefractiveIndexCalculator::getImPart() const {
	return _k;
}

