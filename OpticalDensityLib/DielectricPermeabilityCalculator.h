#pragma once
#include "PlasmaFrequencyCalculator.h"

class DielectricPermeabilityCalculator final: public Calculator {

	ComplexValues _dielectricPerm{};

	RealValues _dielectricPermReal{};
	RealValues _dielectricPermImag{};
	PlasmaFrequencyCalculator _pfCalculator{};

	static std::complex<double> getBoundChargesInput(const std::vector<PlasmaFrequencyObject>&, double);

public:
	void calculate() override;

	[[nodiscard]] const ComplexValues& getDielectricPermeability() const;

	[[nodiscard]] const RealValues& getRealDielectricPermeability() const;
	[[nodiscard]] const RealValues& getImagDielectricPermeability() const;
};