#pragma once
#include <QObject>
#include "OpticalDensityCalculator.h"



class OpticalDensityPipeline final : public QObject {
	Q_OBJECT

	std::shared_ptr<DielectricPermeabilityCalculator> dpCalculator;
	std::shared_ptr<RefractiveIndexCalculator> riCalculator;
	std::shared_ptr<AbsorptionCoeffCalculator> acCalculator;
	std::shared_ptr<ReflectionCoefficientsCalculator> rcCalculator;
	std::shared_ptr<OpticalDensityCalculator> odCalculator;
	std::vector<CalculatorPtr> _pipeline;

public:
	bool wasInit{ false };
	const RealValues& epsReal = dpCalculator->getRealDielectricPermeability();
	const RealValues& epsImag = dpCalculator->getImagDielectricPermeability();

	const RealValues& n = riCalculator->getRealPart();
	const RealValues& k = riCalculator->getImPart();
	const RealValues& R12 = rcCalculator->getIntensityCoeff12();
	const RealValues& phi12 = rcCalculator->getAmpPhase12();
	const RealValues& a = acCalculator->getAbsCoeff();
	const RealValues& D = odCalculator->getOpticalDensity();
	const RealValues& T = odCalculator->getFilmTransmission();
	const RealValues& A = odCalculator->getOpticalDensityInterference();
	QVector<double> qVectorFreq{};

	OpticalDensityPipeline()
		:   dpCalculator{std::make_shared<DielectricPermeabilityCalculator>() },
			riCalculator{ std::make_shared<RefractiveIndexCalculator>(*dpCalculator) },
			acCalculator{std::make_shared<AbsorptionCoeffCalculator>(*riCalculator) },
			rcCalculator{std::make_shared<ReflectionCoefficientsCalculator>(*riCalculator) },
			odCalculator{std::make_shared<OpticalDensityCalculator>(*acCalculator, *rcCalculator, *riCalculator) },
			_pipeline{ dpCalculator, riCalculator, acCalculator, rcCalculator, odCalculator }
	{
	}


	void startPipeline() {

		const int step = 100 / _pipeline.size();
		auto currentStep = 0;

		for(const auto& calculator : _pipeline) {
			calculator->calculate();
			currentStep += step;
			emit calculationProgress(currentStep);
		}

		wasInit = true;
	}

signals:
	void calculationProgress(int);
};

