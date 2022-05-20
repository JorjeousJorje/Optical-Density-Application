#pragma once
#include "QtWidgets/QColorDialog"
#include "ui_PlotCustomizer.h"

class QCustomPlot;

class PlotCustomizerDialog : public QDialog {
	Q_OBJECT
	QColorDialog _colorDialog;
	QCustomPlot* _plot;
	Ui::plotCustomizer ui;

public:
	explicit PlotCustomizerDialog(QWidget*, QCustomPlot*);


public slots:
	void setGraphsColor();
	void setGraphsLineStyle();
	void setGraphsLineThickness();
	void setBrush();
	void removeBrush();

private:
	void initSignalSlots();
};