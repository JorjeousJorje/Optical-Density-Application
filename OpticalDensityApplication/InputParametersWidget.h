#pragma once
#include "ui_InputParametersWidget.h"

class InputParametersWidget : public QWidget {
	Q_OBJECT
public:
	Ui::InputParametersWidget ui;
	explicit InputParametersWidget(QWidget* parent);
	void setInputParameters();


public slots:
	void hideTabOnDoubleClick(int);


private:
	void init();
};



