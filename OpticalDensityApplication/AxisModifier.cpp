#include "AxisModifier.h"
#include "qcustomplot.h"

AxisModifier::AxisModifier(QCustomPlot* iPlot)
	: _plot{ iPlot }
{
}

void AxisModifier::setPlot(QCustomPlot* iPlot) {
    _plot = iPlot;
}

void AxisModifier::rescaleAxes() {
    _plot->rescaleAxes();
    _plot->replot();
}

void AxisModifier::yAxisLogScale() {
    _plot->xAxis->grid()->setSubGridVisible(true);
    const QSharedPointer<QCPAxisTickerLog> logTicker(new QCPAxisTickerLog);
    logTicker->setTickStepStrategy(QCPAxisTicker::TickStepStrategy::tssReadability);

    auto axes = _plot->axisRect()->axes();

    for (const auto & axis: axes) {
        if (axis->axisType() == QCPAxis::atLeft) {
            axis->grid()->setSubGridVisible(true);
            axis->setTicker(logTicker);
            axis->setScaleType(QCPAxis::stLogarithmic);
            axis->setNumberFormat("eb");
            axis->setNumberPrecision(0);
        }
    }

    _plot->yAxis2->setTicker(logTicker);
    _plot->yAxis2->setScaleType(QCPAxis::stLogarithmic);

    _plot->rescaleAxes();
    _plot->replot();
}

void AxisModifier::yAxisLinearScale() {
    _plot->xAxis->grid()->setSubGridVisible(false);
    const QSharedPointer<QCPAxisTicker> linearTicker(new QCPAxisTicker);
    auto axes = _plot->axisRect()->axes();
    for (const auto & axis: axes) {
        if (axis->axisType() == QCPAxis::atLeft) {
            axis->grid()->setSubGridVisible(false);
            axis->setTicker(linearTicker);
            axis->setScaleType(QCPAxis::stLinear);
            axis->setNumberFormat("gb");
            axis->setNumberPrecision(6);
        }
    }
    _plot->yAxis2->setTicker(linearTicker);
    _plot->yAxis2->setScaleType(QCPAxis::stLinear);

    _plot->rescaleAxes();
    _plot->replot();
}

void AxisModifier::removeAllAxisExceptOne()
{
    if (_plot->axisRect()->axes().size() > 1) {
        for (int i = 0; i < _plot->graphCount(); ++i) {

            auto* axisToRemove = _plot->graph(i)->valueAxis();
            if (axisToRemove != _plot->yAxis) {
                _plot->axisRect()->removeAxis(axisToRemove);
                _plot->graph(i)->setValueAxis(_plot->yAxis);
            }
        }

        auto* yAxis = _plot->axisRect()->axis(QCPAxis::atLeft, 0);
        yAxis->setTickLabelColor(Qt::white);
        yAxis->setTickLabelFont(QFont{ "Times" , 10, QFont::Bold });

        _plot->rescaleAxes();
        _plot->replot();
    }
}

void AxisModifier::addAxisForSelectedGraphs() {
    if (_plot->selectedGraphs().size() > 0) {

        for (auto* graph : _plot->selectedGraphs()) {

            if(graph->valueAxis() == _plot->yAxis) {
                auto* newAxis = _plot->axisRect()->addAxis(QCPAxis::atLeft);
                newAxis->setTickLabelColor(graph->pen().color());
                newAxis->setBasePen(QPen(Qt::white));
                newAxis->setLabelColor(Qt::white);
                newAxis->setTickPen(QPen(Qt::white));
                newAxis->setSubTickPen(QPen(Qt::white));
                newAxis->setTickLabelFont(QFont{ "Times" , 10, QFont::Bold });
                graph->setValueAxis(newAxis);
            }
        }

    	auto* mainAxis = _plot->yAxis;
        _plot->yAxis = _plot->axisRect()->axis(QCPAxis::atLeft, 1);
        _plot->axisRect()->removeAxis(mainAxis);

        _plot->rescaleAxes();
        _plot->replot();
    }
}