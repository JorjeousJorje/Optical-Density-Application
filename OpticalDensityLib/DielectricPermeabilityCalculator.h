#pragma once
#include "PlasmaFrequencyCalculator.h"

class DielectricPermeabilityCalculator final: public Calculator {

	ComplexValues _dielectricPerm{};
	PlasmaFrequencyCalculator _pfCalculator{};

	static std::complex<double> getBoundChargesInput(const std::vector<PlasmaFrequencyObject>&, double);

public:
	void calculate() override;

	[[nodiscard]] const ComplexValues& getDielectricPermeability() const;
};