#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_OpticalDensityApplication.h"
#include <QFileDialog>

class PopupMenu;

class OpticalDensityApplication : public QMainWindow
{
	Q_OBJECT
public:
	OpticalDensityApplication(QWidget* parent = Q_NULLPTR);

public slots:

	void moveLegend() const;
	void selectionChanged();
	void processAxisSynchronization();
	void mousePress(QMouseEvent*);
	void mouseWheel();
	void graphClicked(QCPAbstractPlottable*, int);
	void removeSelectedGraph();
	void removeAllGraphs();

	void showParsingResult(const QString&, bool);

public:
	bool experimentalSpectrumLoaded{ false };
	Ui::OpticalDensityApplicationClass ui;

	PopupMenu* _popupMenu;
	QFileDialog* _fileDialog;


private:
	void initSlots();
	void initQCustomPlot();
};
