#pragma once
#include <QWidget>

#include "AxisModifier.h"
#include "ui_AxisModifierWidget.h"

class AvailablePlotsSubMenu;

class AxisModifierWidget : public QWidget {
	Q_OBJECT

	Ui::AxisModifierWidget ui;

public:
	AxisModifier _modifier;

	explicit AxisModifierWidget(QWidget*);
	void connectToAvailablePlots(AvailablePlotsSubMenu*);


public slots:
	void changeGraphScale();


};