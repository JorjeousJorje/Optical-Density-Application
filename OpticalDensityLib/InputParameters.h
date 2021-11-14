#pragma once
#include <complex>
#include <optional>
#include <memory>
#include <vector>

#include "Utility.h"
#include "SuffixOperators.h"


struct BoundChargeCarrierParameters {
	double bound_charge_carrier_conc;
	double bound_charge_carrier_mass;
	double effective_charge;
	double bound_charge_osc_freq;
	double gamma;
};

constexpr std::size_t numIntervals = 1000;

struct InitialParameters {
	double free_charge_carriers_conc{ 10e10 };
	double free_charge_carriers_mass{ 1_electron_mass_units };
	double gamma_0{ 1.0 };

	double dielectric_eps_inf{ 2.0 };
	double v0{ 5.0 };
	double v1{ 5000.0 };
	RealValues freq{ Utility::GenerateLinspace(v0, v1, numIntervals) };


	std::size_t K{ 0 };
	double d{ 900_nm };

	std::complex<double> N_m{ 1.0 };
	std::complex<double> N_air{ 1.0 };

	// TODO: make BoundChargeCarrierParameters optional?
	std::vector<BoundChargeCarrierParameters> bound_charge_carriers_params{ K };
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

// static InitialParameters initial_params{};


