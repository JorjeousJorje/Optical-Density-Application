#pragma once
#include "RefractiveIndexCalculator.h"
#include "AbsorptionCoeffCalculator.h"
#include "ReflectionCoefficientsCalculator.h"

class OpticalDensityCalculator final: public Calculator {

	RealValues D_{};
	RealValues T_{};
	RealValues A_{};

	const AbsorptionCoeffCalculator& _acCalculator;
	const ReflectionCoefficientsCalculator& _rcCalculator;
	const RefractiveIndexCalculator& _riCalculator;

	void calculateOpticalDensity();
	void calculateFilmTransmission();
	void calculateOpticalDensityInterference();

public:

	explicit OpticalDensityCalculator(const AbsorptionCoeffCalculator&, const ReflectionCoefficientsCalculator&, const RefractiveIndexCalculator&);
	void calculate() override;


	[[nodiscard]] const RealValues& getOpticalDensity() const;
	[[nodiscard]] const RealValues& getOpticalDensityInterference() const;
	[[nodiscard]] const RealValues& getFilmTransmission() const;
};