#pragma once
#include "RefractiveIndexCalculator.h"


class AbsorptionCoeffCalculator final : public Calculator {
	RealValues _absCoeff;

	const RefractiveIndexCalculator& _riCalculator;


public:
	explicit AbsorptionCoeffCalculator(const RefractiveIndexCalculator& iRICalculator);
	void calculate() override;

	[[nodiscard]] const RealValues& getAbsCoeff() const;
};
