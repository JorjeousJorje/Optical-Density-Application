#include "OpticalDensityApplication.h"

void OpticalDensityApplication::removeSelectedGraph()
{
    if (ui.customPlot->selectedGraphs().size() > 0) {

        if (ui.customPlot->selectedGraphs().size() == ui.customPlot->graphCount()) {
            removeAllGraphs();
        } else {
            for (auto* graph : ui.customPlot->selectedGraphs()) {

                auto* axisToRemove = graph->valueAxis();
                if (axisToRemove == ui.customPlot->yAxis) {
                    ui.customPlot->axisRect()->removeAxis(axisToRemove);
                    ui.customPlot->yAxis = ui.customPlot->axisRect()->axis(QCPAxis::atLeft, 1);
                } else {
                    ui.customPlot->axisRect()->removeAxis(axisToRemove);
                }
                ui.customPlot->removeGraph(graph);
            }
            ui.customPlot->replot();
        }
    }
}

void OpticalDensityApplication::removeAllGraphs()
{

    for (int i = 0; i < ui.customPlot->graphCount(); ++i) {

        auto* axisToRemove = ui.customPlot->graph(i)->valueAxis();

        if (axisToRemove == ui.customPlot->yAxis) {
            ui.customPlot->yAxis->setTickLabelColor(Qt::white);
            continue;
        }

        ui.customPlot->axisRect()->removeAxis(axisToRemove);
    }

    ui.customPlot->clearGraphs();
    ui.customPlot->replot();
}

void OpticalDensityApplication::showParsingResult(const QString& iMessage, bool ok)  {
    ui.statusBar->showMessage(iMessage, 5500);
    if (ok) {
        ui.statusBar->setStyleSheet("QStatusBar{color:green;}");
    } else {
        ui.statusBar->setStyleSheet("QStatusBar{color:red;}");
    }

}


// TODO: legend item clicked!
void OpticalDensityApplication::selectionChanged()
{
    for (int i = 0; i < ui.customPlot->graphCount(); ++i) {
        QCPGraph* graph = ui.customPlot->graph(i);
        QCPPlottableLegendItem* item = ui.customPlot->legend->itemWithPlottable(graph);

        if (item->selected() && !graph->visible()) {
            graph->setVisible(true);
            graph->valueAxis()->setVisible(true);
            item->setTextColor(QColor{ 0, 0, 0 });
            continue;
        }

        if ((graph->selected() || item->selected()) && graph->visible()) {
            item->setSelected(true);

            if (QGuiApplication::queryKeyboardModifiers() != Qt::CTRL) {
                graph->setVisible(false);
                if (graph->valueAxis() != ui.customPlot->yAxis) {
                    graph->valueAxis()->setVisible(false);
                }
                item->setTextColor(QColor{ 255, 0, 0 });
            }
            graph->setSelection(QCPDataSelection(graph->data()->dataRange()));
        }
    }
}

void OpticalDensityApplication::processAxisSynchronization()
{
    auto* axis_sender = qobject_cast<QCPAxis*>(sender());
    if (axis_sender->selectedParts()== QCPAxis::spAxis || axis_sender->selectedParts()== QCPAxis::spTickLabels) {
        if (axis_sender == ui.customPlot->xAxis || axis_sender == ui.customPlot->xAxis2) {
            ui.customPlot->xAxis2->setSelectedParts(QCPAxis::spAxis | QCPAxis::spTickLabels);
            ui.customPlot->xAxis->setSelectedParts(QCPAxis::spAxis | QCPAxis::spTickLabels);
        }
        else {
            ui.customPlot->yAxis2->setSelectedParts(QCPAxis::spAxis | QCPAxis::spTickLabels);
            axis_sender->setSelectedParts(QCPAxis::spAxis | QCPAxis::spTickLabels);
        }
    }
}


void OpticalDensityApplication::mousePress(QMouseEvent* iEvent)
{
	const auto&& selectedAxes = ui.customPlot->selectedAxes();
    if (!selectedAxes.empty()) {
        const auto* selectedAxis = selectedAxes.front();

        if (selectedAxis->axisType() == QCPAxis::atBottom || selectedAxis->axisType() == QCPAxis::atTop)
            ui.customPlot->axisRect()->setRangeDrag(ui.customPlot->xAxis->orientation());
        else
            ui.customPlot->axisRect()->setRangeDrag(ui.customPlot->yAxis->orientation());
    } else {
        ui.customPlot->axisRect()->setRangeDrag(Qt::Horizontal | Qt::Vertical);
    }
    ui.customPlot->axisRect()->setRangeDragAxes(ui.customPlot->axisRect()->axes());
}

void OpticalDensityApplication::mouseWheel()
{

    const auto&& selectedAxes = ui.customPlot->selectedAxes();
    if (!selectedAxes.empty()) {
        const auto* selectedAxis = selectedAxes.front();

        if (selectedAxis->axisType() == QCPAxis::atBottom || selectedAxis->axisType() == QCPAxis::atTop)
            ui.customPlot->axisRect()->setRangeZoom(ui.customPlot->xAxis->orientation());
        else
            ui.customPlot->axisRect()->setRangeZoom(ui.customPlot->yAxis->orientation());
    } else {
        ui.customPlot->axisRect()->setRangeZoom(Qt::Horizontal | Qt::Vertical);
    }
    ui.customPlot->axisRect()->setRangeZoomAxes(ui.customPlot->axisRect()->axes());
}

void OpticalDensityApplication::graphClicked(QCPAbstractPlottable* iPlottable, const int iDataIndex)
{
    if (const auto* interface1D = iPlottable->interface1D()) {

        const double dataValue = interface1D->dataMainValue(iDataIndex);
        const QString message = QString("Clicked on graph '%1' at data point #%2 with value %3.")
					            .arg(iPlottable->name())
					            .arg(iDataIndex)
    							.arg(dataValue);

        ui.statusBar->showMessage(message, 3500);
    }
}


void OpticalDensityApplication::moveLegend() const {
    if (const auto* contextAction = qobject_cast<QAction*>(sender())) // make sure this slot is really called by a context menu action, so it carries the data we need
    {
        bool ok;
        const auto dataInt = contextAction->data().toInt(&ok);
        if (ok) {
            ui.customPlot->axisRect()->insetLayout()->setInsetAlignment(0, static_cast<Qt::Alignment>(dataInt));
            ui.customPlot->replot();
        }
    }
}
