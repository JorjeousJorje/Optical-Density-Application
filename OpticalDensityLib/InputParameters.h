#pragma once
#include <complex>
#include <optional>
#include <memory>
#include <vector>

#include "Utility.h"
#include "SuffixOperators.h"


struct BoundChargeCarrierParameters {
	double bound_charge_carrier_conc{};
	double bound_charge_carrier_mass{};
	double effective_charge{};
	double bound_charge_osc_freq{};
	double gamma{};
};

struct InitialParameters {
	double free_charge_carriers_conc{};
	double free_charge_carriers_mass{};
	double gamma_0{};

	double dielectric_eps_inf{};
	double v0{};
	double v1{};
	RealValues freq{};
	double d{};

	std::complex<double> N_m{};
	std::complex<double> N_air{1.0};
	std::vector<BoundChargeCarrierParameters> bound_charge_carriers_params{};
};


class InputParametersSingleton {

public:
	~InputParametersSingleton() = default;
	InputParametersSingleton() = delete;
	InputParametersSingleton(const InputParametersSingleton&) = delete;
	InputParametersSingleton& operator=(const InputParametersSingleton&) = delete;
	InputParametersSingleton(InputParametersSingleton&&) = delete;
	InputParametersSingleton& operator=(InputParametersSingleton&&) = delete;

	static std::shared_ptr<InitialParameters> getInstance() {
		static std::shared_ptr<InitialParameters> instance{ new InitialParameters{} };
		return instance;
	}
};


