#include "PopupMenu.h"
#include "AvailablePlotsSubMenu.h"
#include "PlotCustomizerDialog.h"
#include "OpticalDensityApplication.h"
#include "qcustomplot.h"


PopupMenu::PopupMenu(OpticalDensityApplication& iApp)
	: _app{ iApp },
	  _plot{ nullptr },
	  _availablePlotsSub{ _plot, this }
{
	setFont(QFont{ "Times" , 12 });
	setSeparatorsCollapsible(true);
}

void PopupMenu::setPlot(QCustomPlot* iPlot) {
	_plot = iPlot;
	_availablePlotsSub._plot = _plot;
}

void PopupMenu::initGraphRequest() {
	_availablePlotsSub.initSubMenu();

	if (_plot->selectedGraphs().size() > 0)
		addAction("Remove selected graphs", &_app, &OpticalDensityApplication::removeSelectedGraph);
	if (_plot->graphCount() > 0)
		addAction("Remove all graphs", &_app, &OpticalDensityApplication::removeAllGraphs);

	addSeparator();

	const auto* customizer = new PlotCustomizerDialog{ &_app, _plot};
	addAction("Plots customization", customizer, &PlotCustomizerDialog::showNormal);
}

void PopupMenu::initLegendRequest() {
	addAction("Move to top left", &_app, &OpticalDensityApplication::moveLegend)->setData(static_cast<int>(Qt::AlignTop | Qt::AlignLeft));
	addAction("Move to top center", &_app, &OpticalDensityApplication::moveLegend)->setData(static_cast<int>(Qt::AlignTop | Qt::AlignHCenter));
	addAction("Move to top right", &_app, &OpticalDensityApplication::moveLegend)->setData(static_cast<int>(Qt::AlignTop | Qt::AlignRight));
	addAction("Move to bottom right", &_app, &OpticalDensityApplication::moveLegend)->setData(static_cast<int>(Qt::AlignBottom | Qt::AlignRight));
	addAction("Move to bottom left", &_app, &OpticalDensityApplication::moveLegend)->setData(static_cast<int>(Qt::AlignBottom | Qt::AlignLeft));
}


void PopupMenu::contextMenuRequest(QPoint iPos) {
	if(!_plot) {
		return;
	}

	clear();

	if (_plot->legend->selectTest(iPos, false) < 0) {
		initGraphRequest();
	}
	else {
		initLegendRequest();
	}

	exec(_plot->mapToGlobal(iPos));
}
