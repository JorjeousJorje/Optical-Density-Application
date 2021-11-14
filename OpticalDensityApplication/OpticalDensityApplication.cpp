#include "OpticalDensityApplication.h"

OpticalDensityApplication::OpticalDensityApplication(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    initPipeline();

    ui.customPlot->setOpenGl(true);

    // ui.customPlot->setAutoAddPlottableToLegend(true);
    ui.customPlot->legend->setVisible(true);

    ui.customPlot->addGraph();
    ui.customPlot->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
    ui.customPlot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
    ui.customPlot->addGraph();
    ui.customPlot->graph(1)->setPen(QPen(Qt::red)); // line color red for second graph
    // generate some points of data (y0 for first, y1 for second graph):
    // configure right and top axis to show ticks but no labels:
    // (see QCPAxisRect::setupFullAxesBox for a quicker method to do this)
    ui.customPlot->xAxis2->setVisible(true);
    ui.customPlot->xAxis2->setTickLabels(false);
    ui.customPlot->yAxis2->setVisible(true);
    ui.customPlot->yAxis2->setTickLabels(false);
    // make left and bottom axes always transfer their ranges to right and top axes:
    connect(ui.customPlot, &QCustomPlot::legendClick, this, &OpticalDensityApplication::onLegendClick);


    connect(ui.customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui.customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui.customPlot->yAxis2, SLOT(setRange(QCPRange)));
    // pass data points to graphs:


    _pipeline.startPipeline();
    const auto& T = _pipeline.T;
    const auto& n = _pipeline.a;
    const auto& params = InputParametersSingleton::getInstance();
    const auto& freq = params->freq;


    // TODO: Do it in separate thread!
    QVector<double> qFreq(freq.size()), qT(T.size()), qn(n.size());
    for(auto i = 0u; i < qFreq.size(); ++i) {
        qFreq[i] = freq[i];
        qT[i] = T[i];
        qn[i] = n[i];
    }

    ui.customPlot->graph(0)->setData(qFreq, qn);
    // ui.customPlot->graph(1)->setData(qFreq, qT);
    // let the ranges scale themselves so graph 0 fits perfectly in the visible area:
    ui.customPlot->graph(0)->rescaleAxes();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
    ui.customPlot->graph(1)->rescaleAxes(true);
    // Note: we could have also just called ui.customPlot->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:s
    ui.customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables | QCP::iSelectLegend | QCP::iSelectItems);
}


void OpticalDensityApplication::onLegendClick(QCPLegend* iLegend, QCPAbstractLegendItem* iLegendItem, QMouseEvent* iMouseEvent) {
    const auto legendItem = qobject_cast<QCPPlottableLegendItem*>(iLegendItem);


    setWindowIconText("Sex");

    if (legendItem) {

        const auto& plottable = legendItem->plottable();
        if (plottable->visible()) {
            plottable->setVisible(false);
        }
        else {
            plottable->setVisible(true);
        }

        // legendItem->setVisible(false);
    }
}
