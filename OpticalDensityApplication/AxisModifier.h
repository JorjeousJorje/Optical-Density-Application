#pragma once
#include <QObject>
class QCustomPlot;


class AxisModifier: public QObject {
	Q_OBJECT

	QCustomPlot* _plot{ nullptr };
public:

	AxisModifier() = default;
	AxisModifier(QCustomPlot*);

	void setPlot(QCustomPlot*);


public slots:
	void rescaleAxes();
	void yAxisLogScale();
	void yAxisLinearScale();
	void removeAllAxisExceptOne();
	void addAxisForSelectedGraphs();
};