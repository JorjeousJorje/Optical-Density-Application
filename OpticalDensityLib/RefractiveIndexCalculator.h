#pragma once
#include "DielectricPermeabilityCalculator.h"


class RefractiveIndexCalculator final: public Calculator{
	RealValues _n{};
	RealValues _k{};
	ComplexValues N_{};

	DielectricPermeabilityCalculator _dpCalculator{};

public:
	void calculate() override;

	[[nodiscard]] const ComplexValues& getRefractiveIndex() const;
	[[nodiscard]] const RealValues& getRealPart() const;
	[[nodiscard]] const RealValues& getImPart() const;

};