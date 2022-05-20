#include "AxisModifierWidget.h"
#include "OpticalDensityApplication.h"
#include "AvailablePlotsSubMenu.h"

AxisModifierWidget::AxisModifierWidget(QWidget* parent)
	: QWidget{ parent }
{
	ui.setupUi(this);


	connect(ui.rescaleAxesButton, &QPushButton::clicked, &_modifier, &AxisModifier::rescaleAxes);
	connect(ui.addAxisButton, &QPushButton::clicked, &_modifier, &AxisModifier::addAxisForSelectedGraphs);
	connect(ui.removeAxisButton, &QPushButton::clicked, &_modifier, &AxisModifier::removeAllAxisExceptOne);
	connect(ui.logScaleButton, &QPushButton::clicked, this, &AxisModifierWidget::changeGraphScale);

}

void AxisModifierWidget::connectToAvailablePlots(AvailablePlotsSubMenu* iAvailablePlots) {
	connect(ui.newGraphAxisButton, &QPushButton::clicked, iAvailablePlots, &AvailablePlotsSubMenu::setAxisFlag);
}

void AxisModifierWidget::changeGraphScale() {

	if (ui.logScaleButton->isChecked()) {
		_modifier.yAxisLogScale();
		return;
	}
	_modifier.yAxisLinearScale();

}
