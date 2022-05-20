#include "OpticalDensityApplication.h"
#include "PopupMenu.h"
#include "AxisModifierWidget.h"

OpticalDensityApplication::OpticalDensityApplication(QWidget* parent)
    : QMainWindow(parent),
     _popupMenu{ new PopupMenu{ *this } },
     _fileDialog(new QFileDialog{ this })
{
    ui.setupUi(this);


    _fileDialog->setFileMode(QFileDialog::ExistingFile);
    _fileDialog->setNameFilter(tr("Text (*.txt *.ascii)"));

    ui.axisModifierWidget->_modifier.setPlot(ui.customPlot);
    _popupMenu->setPlot(ui.customPlot);


    // TODO: remove this line
    _popupMenu->_availablePlotsSub.pipeline = QSharedPointer<OpticalDensityPipeline>{ &ui.inputParametersWidget->ui.calculationWidget->_pipeline };

    ui.axisModifierWidget->connectToAvailablePlots(&_popupMenu->_availablePlotsSub);

    initQCustomPlot();

    initSlots();
    ui.customPlot->rescaleAxes();
}


void OpticalDensityApplication::initSlots()
{
    connect(ui.customPlot, SIGNAL(selectionChangedByUser()), this, SLOT(selectionChanged()));
    connect(ui.customPlot, SIGNAL(mouseWheel(QWheelEvent*)), this, SLOT(mouseWheel()));
    connect(ui.customPlot, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePress(QMouseEvent*)));
    connect(ui.customPlot, &QCustomPlot::customContextMenuRequested, _popupMenu, &PopupMenu::contextMenuRequest);
    connect(ui.customPlot, &QCustomPlot::plottableClick, this, &OpticalDensityApplication::graphClicked);

    connect(ui.customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui.customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui.customPlot->yAxis2, SLOT(setRange(QCPRange)));

    connect(ui.customPlot->xAxis, &QCPAxis::selectionChanged, this, &OpticalDensityApplication::processAxisSynchronization);
    connect(ui.customPlot->xAxis2, &QCPAxis::selectionChanged, this, &OpticalDensityApplication::processAxisSynchronization);
    connect(ui.customPlot->yAxis, &QCPAxis::selectionChanged, this, &OpticalDensityApplication::processAxisSynchronization);
    connect(ui.customPlot->yAxis2, &QCPAxis::selectionChanged, this, &OpticalDensityApplication::processAxisSynchronization);


    connect(ui.actionImportData, &QAction::triggered, _fileDialog, &QDialog::exec);

    connect(_fileDialog, &QFileDialog::fileSelected, &_popupMenu->_availablePlotsSub, &AvailablePlotsSubMenu::loadExperimentalSpectrum);
    connect(&_popupMenu->_availablePlotsSub, &AvailablePlotsSubMenu::emitParingMessage, this, &OpticalDensityApplication::showParsingResult);
}

void OpticalDensityApplication::initQCustomPlot()
{
    ui.customPlot->setOpenGl(true);
	ui.customPlot->legend->setVisible(true);

    ui.customPlot->setNoAntialiasingOnDrag(true);

    ui.customPlot->legend->setSelectableParts(QCPLegend::spItems);
    ui.customPlot->xAxis2->setVisible(true);
    ui.customPlot->xAxis2->setTickLabels(false);
    ui.customPlot->yAxis2->setVisible(true);
    ui.customPlot->yAxis2->setTickLabels(false);


    ui.customPlot->legend->setFont(QFont{ "Times" , 12});
    ui.customPlot->legend->setSelectedFont(QFont{ "Times" , 12, QFont::Bold });
    ui.customPlot->xAxis->setTickLabelFont(QFont{ "Times" , 10, QFont::Bold });
    ui.customPlot->yAxis->setTickLabelFont(QFont{ "Times" , 10, QFont::Bold });

    ui.customPlot->setBackground(QBrush(Qt::black));

    ui.customPlot->xAxis->setTickLabelColor(Qt::white);
    ui.customPlot->xAxis->setBasePen(QPen(Qt::white));
    ui.customPlot->xAxis->setLabelColor(Qt::white);
    ui.customPlot->xAxis->setTickPen(QPen(Qt::white));
    ui.customPlot->xAxis->setSubTickPen(QPen(Qt::white));

    ui.customPlot->yAxis->setTickLabelColor(Qt::white);
    ui.customPlot->yAxis->setBasePen(QPen(Qt::white));
    ui.customPlot->yAxis->setLabelColor(Qt::white);
    ui.customPlot->yAxis->setTickPen(QPen(Qt::white));
    ui.customPlot->yAxis->setSubTickPen(QPen(Qt::white));

    ui.customPlot->setContextMenuPolicy(Qt::CustomContextMenu);

    ui.customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                                   QCP::iSelectLegend | QCP::iSelectPlottables | QCP::iMultiSelect);
}


