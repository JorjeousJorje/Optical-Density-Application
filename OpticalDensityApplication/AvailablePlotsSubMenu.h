#pragma once
#include <QAction>
#include <QMouseEvent>
#include <QPointer>

#include "ExperimentalSpectrumLoader.h"
#include "SubMenu.h"
// #include "OpticalDencityPipeline.h"

class QCustomPlot;
class OpticalDensityPipeline;

class AvailablePlotsSubMenu final: public SubMenu {
	Q_OBJECT

	friend class PopupMenu;
	QCustomPlot* _plot;

	LoadedUnit experimentalSpectrum{};
	ExperimentalSpectrumLoader _loader{};

	bool createNewAxis{ true };

public:

	QSharedPointer<OpticalDensityPipeline> pipeline{ nullptr };
	explicit AvailablePlotsSubMenu(QCustomPlot*, QMenu*);
	void initSubMenu() override;
	void createGraph(const QVector<double>&, const QVector<double>&, const QColor&, const QString&);


signals:
	void emitParingMessage(const QString&, bool);


public slots:

	void loadExperimentalSpectrum(const QString&);

	void setAxisFlag();
	void plotAllGraphs();

	void plotEpsilonReal();
	void plotEpsilonImag();

	void plotRealRefractiveIndex();
	void plotImaginaryRefractiveIndex();
	void plotReflectiveCoefficientR12();
	void plotPhase();
	void AbsorptionCoefficient();
	void plotOpticalDensityNoInterference();
	void plotFilmTransmission();
	void plotOpticalDensity();
	void plotExperimentalSpectrum();

};