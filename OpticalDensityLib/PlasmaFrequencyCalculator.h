#pragma once
#include "Calculator.h"


struct PlasmaFrequencyObject final {
	double plasma_freq;
	double bound_charge_osc_freq;
	double gamma;
};

class PlasmaFrequencyCalculator final: public Calculator {


	std::optional<double> _free_plasma_freq{ std::nullopt };
	std::vector<PlasmaFrequencyObject> bound_plasma_freq{};


	static double getBoundPlasmaFrequency(const BoundChargeCarrierParameters&);


	void calculateFreePlasmaFrequency();
	void calculateBoundPlasmaFrequencies();

	struct BoundFrequencySetter final {

		PlasmaFrequencyObject operator()(const BoundChargeCarrierParameters& params) const {
			const auto freq = getBoundPlasmaFrequency(params);
			return{ freq, params.bound_charge_osc_freq, params.gamma };
		}
	};

	const BoundFrequencySetter _setter{};

public:

	void calculate() override;

	[[nodiscard]] std::optional<double> getFreePlasmaFrequency() const;
	[[nodiscard]] const std::vector<PlasmaFrequencyObject>& getBoundPlasmaFrequencies() const;
};