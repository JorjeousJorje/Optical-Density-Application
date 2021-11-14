#include "PlasmaFrequencyCalculator.h"


double PlasmaFrequencyCalculator::getBoundPlasmaFrequency(const BoundChargeCarrierParameters& params) {
	const auto& init_params = InputParametersSingleton::getInstance();

	constexpr auto c = light_speed_unit_cgs;

	const auto e_i = params.effective_charge;
	const auto N_i = params.bound_charge_carrier_conc;
	const auto eps_inf = init_params->dielectric_eps_inf;
	const auto m_i = params.bound_charge_carrier_mass;

	const auto omega = e_i / (2.0 * pi * c) * std::sqrt(4.0 * pi * N_i / (3.0 * m_i * eps_inf));
	return omega;
}


void PlasmaFrequencyCalculator::calculateFreePlasmaFrequency() {
	const auto& init_params = InputParametersSingleton::getInstance();

	constexpr auto e = electron_charge_unit_cgs;
	constexpr auto c = light_speed_unit_cgs;

	const auto N_0 = init_params->free_charge_carriers_conc;
	const auto eps_inf = init_params->dielectric_eps_inf;
	const auto m_0 = init_params->free_charge_carriers_mass;

	const auto omega_0 = e / (2.0 * pi * c) * std::sqrt(4.0 * pi * N_0 / (m_0 * eps_inf));
	_free_plasma_freq = omega_0;
}


void PlasmaFrequencyCalculator::calculateBoundPlasmaFrequencies() {
	const auto& init_params = InputParametersSingleton::getInstance();


	const auto& boundParams = init_params->bound_charge_carriers_params;

	if (boundParams.empty()) {
		return;
	}

	bound_plasma_freq.resize(boundParams.size());
	std::transform(boundParams.begin(), boundParams.end(), bound_plasma_freq.begin(), _setter);
}


void PlasmaFrequencyCalculator::calculate() {
	calculateFreePlasmaFrequency();
	calculateBoundPlasmaFrequencies();
}

std::optional<double> PlasmaFrequencyCalculator::getFreePlasmaFrequency() const {
	return _free_plasma_freq;
}

const std::vector<PlasmaFrequencyObject>& PlasmaFrequencyCalculator::getBoundPlasmaFrequencies() const {
	return bound_plasma_freq;
}





