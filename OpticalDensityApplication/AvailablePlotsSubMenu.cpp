#include "AvailablePlotsSubMenu.h"
#include "OpticalDensityApplication.h"
#include "PopupMenu.h"

AvailablePlotsSubMenu::AvailablePlotsSubMenu(QCustomPlot* iPlot, QMenu* iParent)
	: SubMenu{ iParent }, _plot{ iPlot }
{

}


void AvailablePlotsSubMenu::initSubMenu() {
    auto* parentMenu = qobject_cast<QMenu*>(parent());
	auto* plotsMenu = new QMenu(parentMenu);
	plotsMenu->setTitle("Available plots");
    plotsMenu->setFont(QFont{ "Times" , 12 });
    parentMenu->addMenu(plotsMenu);

	
    if (pipeline->n.size() > 0) {
        plotsMenu->addAction("Plot all graphs", this, &AvailablePlotsSubMenu::plotAllGraphs);

        plotsMenu->addAction("Plot epsilon (real)", this, &AvailablePlotsSubMenu::plotEpsilonReal);
        plotsMenu->addAction("Plot epsilon (imaginary)", this, &AvailablePlotsSubMenu::plotEpsilonImag);

        plotsMenu->addAction("Plot the real part of the refractive index n(v)", this, &AvailablePlotsSubMenu::plotRealRefractiveIndex);
        plotsMenu->addAction("Plot the imaginary part of the refractive index k(v)", this, &AvailablePlotsSubMenu::plotImaginaryRefractiveIndex);
        plotsMenu->addAction("Plot reflection coefficient by intensity R12(v)", this, &AvailablePlotsSubMenu::plotReflectiveCoefficientR12);
        plotsMenu->addAction("Plot phase of the reflection coefficient by amplitude phi12(v)", this, &AvailablePlotsSubMenu::plotPhase);
        plotsMenu->addAction("Plot absorption coefficient a(v)", this, &AvailablePlotsSubMenu::AbsorptionCoefficient);
        plotsMenu->addAction("Plot film optical density w/o interference D(v)", this, &AvailablePlotsSubMenu::plotOpticalDensityNoInterference);
        plotsMenu->addAction("Plot film transmission T(v)", this, &AvailablePlotsSubMenu::plotFilmTransmission);
        plotsMenu->addAction("Plot film optical density w/ interference A(v)", this, &AvailablePlotsSubMenu::plotOpticalDensity);
    } else {
        plotsMenu->addAction("No graphs are available");
    }

	if (!experimentalSpectrum.opt_density.empty()) {
		plotsMenu->addAction("Plot experimental spectrum", this, &AvailablePlotsSubMenu::plotExperimentalSpectrum);
	}
}

void AvailablePlotsSubMenu::createGraph(const QVector<double>& x, const QVector<double>& y, const QColor& iColor, const QString& iGraphName)
{
	const auto* popupMenu = qobject_cast<PopupMenu*>(parent());

	QPen graphPen;
    graphPen.setColor(iColor);
    graphPen.setWidth(4);
    QCPGraph* graph;

    if (createNewAxis) {
        const auto currentAxisIndex = _plot->graphCount();
        if (currentAxisIndex > 0) {
            auto* newAxis = _plot->axisRect()->addAxis(QCPAxis::atLeft);
            newAxis->setTickLabelColor(Qt::white);
            newAxis->setBasePen(QPen(Qt::white));
            newAxis->setLabelColor(Qt::white);
            newAxis->setTickPen(QPen(Qt::white));
            newAxis->setSubTickPen(QPen(Qt::white));
            connect(newAxis, &QCPAxis::selectionChanged, &popupMenu->_app, &OpticalDensityApplication::processAxisSynchronization);

            newAxis->setTickLabelColor(graphPen.color());
            newAxis->setTickLabelFont(QFont{ "Times" , 10, QFont::Bold });
            graph = _plot->addGraph(_plot->xAxis, newAxis);
        }
        else {
            _plot->yAxis->setTickLabelColor(graphPen.color());
            graph = _plot->addGraph();
        }
    }
    else {
        graph = _plot->addGraph();
    }

    graph->setName(iGraphName);
    graph->setData(x, y);
    graph->setPen(graphPen);
    _plot->rescaleAxes();
    _plot->replot();
}


