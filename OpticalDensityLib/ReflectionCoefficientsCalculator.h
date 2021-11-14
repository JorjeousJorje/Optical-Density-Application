#pragma once
#include "RefractiveIndexCalculator.h"


class ReflectionCoefficientsCalculator final: public Calculator {
	RealValues R12{};
	RealValues R23{};
	RealValues _phi12{};

	ComplexValues _r12{};
	ComplexValues _r23{};


	const RefractiveIndexCalculator& _riCalculator;



	void calculateAmplitudeReflection();
	void calculateIntensityReflection();
	void calculateAmplitudePhase();

public:
	explicit ReflectionCoefficientsCalculator(const RefractiveIndexCalculator& iRICalculator);
	void calculate() override;

	[[nodiscard]] const RealValues& getAmpPhase12() const;

	[[nodiscard]] const ComplexValues& getAmpCoeff12() const;
	[[nodiscard]] const ComplexValues& getAmpCoeff23() const;

	[[nodiscard]] const RealValues& getIntensityCoeff12() const;
	[[nodiscard]] const RealValues& getIntensityCoeff23() const;

};
