#pragma once
#include "DielectricPermeabilityCalculator.h"


class RefractiveIndexCalculator final: public Calculator{
	RealValues _n{};
	RealValues _k{};
	ComplexValues N_{};

	const DielectricPermeabilityCalculator& _dpCalculator;

public:
	explicit RefractiveIndexCalculator(const DielectricPermeabilityCalculator& iRICalculator);

	void calculate() override;

	[[nodiscard]] const ComplexValues& getRefractiveIndex() const;
	[[nodiscard]] const RealValues& getRealPart() const;
	[[nodiscard]] const RealValues& getImPart() const;

};