#include <thread>
#include "CalculationWidget.h"
#include "InputParametersWidget.h"

CalculationWidget::CalculationWidget(QWidget* parent)
	: QWidget{ parent }
{
	ui.setupUi(this);


	connect(ui.startCalculationButton, &QPushButton::clicked, this, &CalculationWidget::initPipeline);
	connect(&_pipeline, SIGNAL(calculationProgress(int)), ui.progressBar, SLOT(setValue(int)));
}

void CalculationWidget::initPipeline()
{
	auto* inputParamsWidgets = qobject_cast<InputParametersWidget*>(parent());
	ui.calculationIndicator->setText("Calculating...");
	ui.calculationIndicator->setStyleSheet("QLabel { color : black; }");
	ui.progressBar->setValue(0);

	inputParamsWidgets->setInputParameters();

	const auto& params = InputParametersSingleton::getInstance();
	_pipeline.qVectorFreq.clear();
	_pipeline.qVectorFreq.resize(params->freq.size());
	std::copy(std::begin(params->freq), std::end(params->freq), _pipeline.qVectorFreq.begin());


	_pipeline.startPipeline();

	ui.calculationIndicator->setText("Done!");
	ui.calculationIndicator->setStyleSheet("QLabel { color : green; }");
}
