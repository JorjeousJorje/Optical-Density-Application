#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_OpticalDensityApplication.h"

#include "OpticalDencityPipeline.h"


class OpticalDensityApplication : public QMainWindow
{
    Q_OBJECT
	void initPipeline() const {
		const auto& params = InputParametersSingleton::getInstance();
		params->K = 1;
		params->bound_charge_carriers_params.resize(params->K);
		params->gamma_0 = 1.0;
		params->free_charge_carriers_mass = 1_electron_mass_units;
		params->d = 1e-2;

		if (params->K >= 1) {
			const BoundChargeCarrierParameters param
			{
				10e10,
				2_electron_mass_units,
				2_electron_charge_units,
				10.0,
				2.0
			};

			params->bound_charge_carriers_params[0] = param;
		}
    }
public:
    OpticalDensityApplication(QWidget *parent = Q_NULLPTR);


private slots:
    void onLegendClick(QCPLegend*, QCPAbstractLegendItem*, QMouseEvent*);

private:
    OpticalDensityPipeline _pipeline{};
    Ui::OpticalDensityApplicationClass ui;
};
