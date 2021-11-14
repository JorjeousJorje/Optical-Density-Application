#include "DielectricPermeabilityCalculator.h"

std::complex<double> DielectricPermeabilityCalculator::getBoundChargesInput(const std::vector<PlasmaFrequencyObject>& iFreq, const double v) {
	using namespace std::complex_literals;
	std::complex<double> result{};

	auto adder = [&](const PlasmaFrequencyObject& a) {
		const auto freq_squared = a.plasma_freq * a.plasma_freq;
		const auto v_i = a.bound_charge_osc_freq;
		const auto gamma_i = a.gamma;
		result += freq_squared / (v_i * v_i - v * v - 1i * v * gamma_i);
	};

	std::for_each(iFreq.begin(), iFreq.end(), adder);
	return result;
}

void DielectricPermeabilityCalculator::calculate() {
	_pfCalculator.calculate();

	using namespace std::complex_literals;
	const auto& init_params = InputParametersSingleton::getInstance();

	const auto& freq = init_params->freq;
	_dielectricPerm.resize(freq.size());

	const auto eps_inf = init_params->dielectric_eps_inf;
	const auto omega_0 = _pfCalculator.getFreePlasmaFrequency().value();
	const auto omega_0_squared = omega_0 * omega_0;
	const auto gamma_0 = init_params->gamma_0;
	const auto omega_bound = _pfCalculator.getBoundPlasmaFrequencies();

	const auto setter = [=](const double v)
	{
		const auto free_charges_input = omega_0_squared / (v * v + 1i * v * gamma_0);
		const auto bound_charges_input = getBoundChargesInput(omega_bound, v);
		return eps_inf * (1.0 - free_charges_input + bound_charges_input);
	};

	std::transform(begin(freq), end(freq), begin(_dielectricPerm), setter);
}


const ComplexValues& DielectricPermeabilityCalculator::getDielectricPermeability() const {
	return  _dielectricPerm;
}

