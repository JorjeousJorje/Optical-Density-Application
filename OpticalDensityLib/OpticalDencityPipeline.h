#pragma once
#include "OpticalDensityCalculator.h"





class OpticalDensityPipeline final {
	std::shared_ptr<RefractiveIndexCalculator> riCalculator;
	std::shared_ptr<AbsorptionCoeffCalculator> acCalculator;
	std::shared_ptr<ReflectionCoefficientsCalculator> rcCalculator;
	std::shared_ptr<OpticalDensityCalculator> odCalculator;
	std::vector<CalculatorPtr> _pipeline;



	struct PipelineTraversier {

		void operator()(const CalculatorPtr& iCalculator) const {
			iCalculator->calculate();
		}

	};

	const PipelineTraversier _traversier{};

public:
	const RealValues& n = riCalculator->getRealPart();
	const RealValues& k = riCalculator->getImPart();
	const RealValues& R12 = rcCalculator->getIntensityCoeff12();
	const RealValues& phi12 = rcCalculator->getAmpPhase12();
	const RealValues& a = acCalculator->getAbsCoeff();
	const RealValues& D = odCalculator->getOpticalDensity();
	const RealValues& T = odCalculator->getFilmTransmission();
	const RealValues& A = odCalculator->getOpticalDensityInterference();

	explicit OpticalDensityPipeline()
		:	riCalculator{std::make_shared<RefractiveIndexCalculator>() },
			acCalculator{std::make_shared<AbsorptionCoeffCalculator>(*riCalculator) },
			rcCalculator{std::make_shared<ReflectionCoefficientsCalculator>(*riCalculator) },
			odCalculator{std::make_shared<OpticalDensityCalculator>(*acCalculator, *rcCalculator, *riCalculator) },
			_pipeline{ riCalculator, acCalculator, rcCalculator, odCalculator }
	{
	}


	void startPipeline() {
		std::for_each(_pipeline.begin(), _pipeline.end(), _traversier);
	}

};

