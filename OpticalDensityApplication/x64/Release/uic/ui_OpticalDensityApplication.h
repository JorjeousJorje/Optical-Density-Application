/********************************************************************************
** Form generated from reading UI file 'OpticalDensityApplication.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTICALDENSITYAPPLICATION_H
#define UI_OPTICALDENSITYAPPLICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AxisModifierWidget.h"
#include "InputParametersWidget.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OpticalDensityApplicationClass
{
public:
    QAction *actionImportData;
    QAction *actionExportData;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    InputParametersWidget *inputParametersWidget;
    QVBoxLayout *verticalLayout;
    AxisModifierWidget *axisModifierWidget;
    QFrame *line;
    QCustomPlot *customPlot;
    QMenuBar *menuBar;
    QMenu *menuExport_Import;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpticalDensityApplicationClass)
    {
        if (OpticalDensityApplicationClass->objectName().isEmpty())
            OpticalDensityApplicationClass->setObjectName(QString::fromUtf8("OpticalDensityApplicationClass"));
        OpticalDensityApplicationClass->resize(1080, 621);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpticalDensityApplicationClass->sizePolicy().hasHeightForWidth());
        OpticalDensityApplicationClass->setSizePolicy(sizePolicy);
        actionImportData = new QAction(OpticalDensityApplicationClass);
        actionImportData->setObjectName(QString::fromUtf8("actionImportData"));
        QFont font;
        font.setPointSize(11);
        actionImportData->setFont(font);
        actionExportData = new QAction(OpticalDensityApplicationClass);
        actionExportData->setObjectName(QString::fromUtf8("actionExportData"));
        actionExportData->setFont(font);
        centralWidget = new QWidget(OpticalDensityApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 69, 532));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        inputParametersWidget = new InputParametersWidget(scrollAreaWidgetContents_2);
        inputParametersWidget->setObjectName(QString::fromUtf8("inputParametersWidget"));
        sizePolicy1.setHeightForWidth(inputParametersWidget->sizePolicy().hasHeightForWidth());
        inputParametersWidget->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(inputParametersWidget);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        axisModifierWidget = new AxisModifierWidget(centralWidget);
        axisModifierWidget->setObjectName(QString::fromUtf8("axisModifierWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(axisModifierWidget->sizePolicy().hasHeightForWidth());
        axisModifierWidget->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(axisModifierWidget);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy3);
        customPlot->setMaximumSize(QSize(1820, 980));

        verticalLayout->addWidget(customPlot);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        OpticalDensityApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpticalDensityApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 28));
        QFont font1;
        font1.setPointSize(12);
        menuBar->setFont(font1);
        menuExport_Import = new QMenu(menuBar);
        menuExport_Import->setObjectName(QString::fromUtf8("menuExport_Import"));
        OpticalDensityApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpticalDensityApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpticalDensityApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpticalDensityApplicationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        statusBar->setFont(font2);
        OpticalDensityApplicationClass->setStatusBar(statusBar);

        menuBar->addAction(menuExport_Import->menuAction());
        menuExport_Import->addAction(actionImportData);

        retranslateUi(OpticalDensityApplicationClass);

        QMetaObject::connectSlotsByName(OpticalDensityApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpticalDensityApplicationClass)
    {
        OpticalDensityApplicationClass->setWindowTitle(QCoreApplication::translate("OpticalDensityApplicationClass", "OpticalDensityApplication", nullptr));
        actionImportData->setText(QCoreApplication::translate("OpticalDensityApplicationClass", "Import experimental data", nullptr));
        actionExportData->setText(QCoreApplication::translate("OpticalDensityApplicationClass", "Export selected data", nullptr));
        menuExport_Import->setTitle(QCoreApplication::translate("OpticalDensityApplicationClass", "Export/Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpticalDensityApplicationClass: public Ui_OpticalDensityApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTICALDENSITYAPPLICATION_H
