#include "PlotCustomizerDialog.h"
#include "qcustomplot.h"

// TODO: selection graphs problema
PlotCustomizerDialog::PlotCustomizerDialog(QWidget* iParent, QCustomPlot* iPlot)
	: QDialog{ iParent }, _colorDialog{ iParent }, _plot{ iPlot }
{
	ui.setupUi(this);

	// ColorDialog setup
	_colorDialog.setOption(QColorDialog::ShowAlphaChannel);

	// Thickness slider setup
	ui.thicknessSlider->setMinimum(1);
	ui.thicknessLcd->display(1);
	ui.thicknessSlider->setMaximum(10);

	// LineStyle slider setup
	ui.linetypeSlider->setMinimum(QCPGraph::lsLine);
	ui.linetypeLcd->display(QCPGraph::lsLine);
	ui.linetypeSlider->setMaximum(QCPGraph::lsImpulse);
	initSignalSlots();
}


void PlotCustomizerDialog::setGraphsColor() {
	QPen oldSelectionPen{};
	QPen newPen{};

	auto colorSetter = [&](QCPGraph* graph)
	{
		newPen.setColor(_colorDialog.currentColor());
		graph->valueAxis()->setTickLabelColor(_colorDialog.currentColor());
		newPen.setWidth(graph->pen().width());
		graph->setPen(newPen);
	};

	if(ui.selectedGraphsBox->isChecked()) {
		foreach(QCPGraph* graph, _plot->selectedGraphs()) {
			oldSelectionPen = graph->selectionDecorator()->pen();
			colorSetter(graph);
			graph->selectionDecorator()->setPen(graph->pen());
		}
		_plot->replot();
		foreach(const QCPGraph* graph, _plot->selectedGraphs()) {
			graph->selectionDecorator()->setPen(oldSelectionPen);
		}
		return;

	}
	for (int i = 0; i < _plot->graphCount(); ++i) {
		auto* graph = _plot->graph(i);
		colorSetter(graph);
	}
	_plot->replot();
}

void PlotCustomizerDialog::setGraphsLineThickness() {
	const auto width = ui.thicknessSlider->value();
	QPen newPen{};
	QPen oldSelectionPen{};

	auto thicknessSetter = [&](QCPGraph* graph)
	{
		newPen.setColor(graph->pen().color());
		newPen.setWidth(width);
		graph->setPen(newPen);
	};

	if (ui.selectedGraphsBox->isChecked()) {
		foreach(QCPGraph* graph, _plot->selectedGraphs()) {
			oldSelectionPen = graph->selectionDecorator()->pen();

			thicknessSetter(graph);
			graph->selectionDecorator()->setPen(newPen);
		}
		_plot->replot();
		foreach(const QCPGraph* graph, _plot->selectedGraphs()) {
			graph->selectionDecorator()->setPen(oldSelectionPen);
		}
		return;
	}
	for (int i = 0; i < _plot->graphCount(); ++i) {
		auto* graph = _plot->graph(i);
		thicknessSetter(graph);
	}
	_plot->replot();
}

void PlotCustomizerDialog::setGraphsLineStyle() {
	const auto style = static_cast<QCPGraph::LineStyle>(ui.linetypeSlider->value());
	if (ui.selectedGraphsBox->isChecked()) {
		foreach(QCPGraph * graph, _plot->selectedGraphs()) {
			graph->setLineStyle(style);
		}
	}
	else {
		for (int i = 0; i < _plot->graphCount(); ++i) {
			auto* graph = _plot->graph(i);
			graph->setLineStyle(style);
		}
	}
	_plot->replot();
}


void PlotCustomizerDialog::setBrush() {
	QPen oldSelectionPen{};
	auto brushSetter = [&](QCPGraph* graph){
		auto newBrushColor = graph->pen().color();
		newBrushColor.setAlpha(ui.brushAlphaSpinBox->value());
		const QBrush newBrush{ newBrushColor };
		graph->setBrush(newBrush);
		graph->selectionDecorator()->setBrush(newBrush);
	};

	if (ui.selectedGraphsBox->isChecked()) {
		foreach(QCPGraph * graph, _plot->selectedGraphs()) {
			brushSetter(graph);
		}
	}
	else {
		for (int i = 0; i < _plot->graphCount(); ++i) {
			auto* graph = _plot->graph(i);
			brushSetter(graph);
		}
	}
	_plot->replot();
}

void PlotCustomizerDialog::removeBrush() {
	if (ui.selectedGraphsBox->isChecked()) {
		foreach(QCPGraph * graph, _plot->selectedGraphs()) {
			graph->setBrush({});
			graph->selectionDecorator()->setBrush({});
		}
	}
	else {
		for (int i = 0; i < _plot->graphCount(); ++i) {
			auto* graph = _plot->graph(i);
			graph->setBrush({});
			graph->selectionDecorator()->setBrush({});
		}
	}
	_plot->replot();
}

void PlotCustomizerDialog::initSignalSlots() {
	connect(ui.changeColorButton, &QPushButton::clicked, &_colorDialog, &QColorDialog::showNormal);
	connect(&_colorDialog, &QColorDialog::currentColorChanged, this, &PlotCustomizerDialog::setGraphsColor);

	connect(ui.linetypeSlider, &QSlider::valueChanged, this, &PlotCustomizerDialog::setGraphsLineStyle);
	connect(ui.thicknessSlider, &QSlider::valueChanged, this, &PlotCustomizerDialog::setGraphsLineThickness);


	connect(ui.setBrushButton, &QPushButton::clicked, this, &PlotCustomizerDialog::setBrush);
	connect(ui.removeBrushButton, &QPushButton::clicked, this, &PlotCustomizerDialog::removeBrush);


	connect(ui.linetypeSlider, SIGNAL(valueChanged(int)), ui.linetypeLcd, SLOT(display(int)));
	connect(ui.thicknessSlider, SIGNAL(valueChanged(int)), ui.thicknessLcd, SLOT(display(int)));
}

