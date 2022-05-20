#include <chrono>
#include "InputParametersWidget.h"
#include "InputParameters.h"

InputParametersWidget::InputParametersWidget(QWidget* parent)
	: QWidget{ parent }
{
	ui.setupUi(this);

	connect(ui.tabWidget, &QTabWidget::tabBarDoubleClicked, this, &InputParametersWidget::hideTabOnDoubleClick);
	init();
}

void InputParametersWidget::setInputParameters()
{
	const auto& params = InputParametersSingleton::getInstance();
	params->free_charge_carriers_conc = ui.concSpinValue->value() * std::pow(10.0, ui.concSpinPower->value());
	params->free_charge_carriers_mass = ui.massSpin->value() * electron_mass_unit_cgs;
	params->gamma_0 = ui.attenuationSpin->value();
	params->dielectric_eps_inf = ui.epsilonSpin->value();

	const auto v0 = ui.lbFreqSpin->value();
	const auto v1 = ui.rbFreqSpin->value();
	const auto numIntervals = ui.pointsSpin->value();

	params->freq = Utility::GenerateLinspace(v0, v1, numIntervals);
	params->d = ui.filmThicknessSpin->value() * 1e-7;
	params->N_m = { ui.refractRealSpin->value(), ui.refractImagSpin->value() };

	params->bound_charge_carriers_params.clear();

	BoundChargeCarrierParameters boundParam{};
	for (int i = 0; i < ui.tabWidget->count(); ++i) {

		if (ui.tabWidget->isTabEnabled(i)) {
			// FIX: I don't know how to get my custom widget from tab, so i use widget->children method
			const auto* tabChildrenWidget = qobject_cast<ModeInputParametersWidget*>(ui.tabWidget->widget(i)->children()[1]);

			const auto concPower = tabChildrenWidget->ui.concSpinPower->value();
			boundParam.bound_charge_carrier_conc = tabChildrenWidget->ui.concSpinValue->value() * std::pow(10.0, concPower);
			boundParam.bound_charge_carrier_mass = tabChildrenWidget->ui.massSpin->value() * atomic_mass_unit_cgs;
			boundParam.effective_charge = tabChildrenWidget->ui.chargeSpin->value() * electron_charge_unit_cgs;
			boundParam.bound_charge_osc_freq = tabChildrenWidget->ui.freqSpin->value();
			boundParam.gamma = tabChildrenWidget->ui.attenuationSpin->value();
			params->bound_charge_carriers_params.emplace_back(boundParam);

		}

	}

}

void InputParametersWidget::init()
{
	connect(ui.concSpinValue, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.attenuationSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.epsilonSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.lbFreqSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.rbFreqSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.filmThicknessSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.refractRealSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.refractImagSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);

	connect(ui.massSpin, QOverload<int>::of(&QSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	connect(ui.concSpinPower, QOverload<int>::of(&QSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);

	// set 2-6 tabs disabled 
	for (int i = 0; i < ui.tabWidget->count(); ++i) {

		if (i > 0)
			ui.tabWidget->setTabEnabled(i, false);

		const auto* tabChildrenWidget = qobject_cast<ModeInputParametersWidget*>(ui.tabWidget->widget(i)->children()[1]);

		connect(tabChildrenWidget->ui.concSpinValue, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
		connect(tabChildrenWidget->ui.freqSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
		connect(tabChildrenWidget->ui.attenuationSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);

		connect(tabChildrenWidget->ui.concSpinPower, QOverload<int>::of(&QSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
		connect(tabChildrenWidget->ui.massSpin, QOverload<int>::of(&QSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
		connect(tabChildrenWidget->ui.chargeSpin, QOverload<int>::of(&QSpinBox::valueChanged), ui.calculationWidget, &CalculationWidget::setStateOnChange);
	}
}

void InputParametersWidget::hideTabOnDoubleClick(int iIndex) {

	if (ui.tabWidget->isTabEnabled(iIndex)) {
		ui.tabWidget->setTabEnabled(iIndex, false);
		return;
	}
	ui.tabWidget->setTabEnabled(iIndex, true);
};
