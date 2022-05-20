#pragma once
#include "ui_CalculationWidget.h"
#include "OpticalDencityPipeline.h"

class CalculationWidget : public QWidget {
	Q_OBJECT

public:
	Ui::CalculationWidget ui;
	OpticalDensityPipeline _pipeline;
	explicit CalculationWidget(QWidget* parent);



public slots:
	void setStateOnChange(double) {
		if (_pipeline.wasInit) {
			ui.calculationIndicator->setText("Parameters are changed!");
			ui.calculationIndicator->setStyleSheet("QLabel { color : red; }");
			ui.progressBar->setValue(0);
			_pipeline.wasInit = false;
		}
	}

private:
	void initPipeline();
};
