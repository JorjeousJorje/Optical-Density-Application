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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OpticalDensityApplicationClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *customPlot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpticalDensityApplicationClass)
    {
        if (OpticalDensityApplicationClass->objectName().isEmpty())
            OpticalDensityApplicationClass->setObjectName(QString::fromUtf8("OpticalDensityApplicationClass"));
        OpticalDensityApplicationClass->resize(600, 400);
        centralWidget = new QWidget(OpticalDensityApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        horizontalLayout->addWidget(customPlot);

        OpticalDensityApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpticalDensityApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        OpticalDensityApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpticalDensityApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpticalDensityApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpticalDensityApplicationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OpticalDensityApplicationClass->setStatusBar(statusBar);

        retranslateUi(OpticalDensityApplicationClass);

        QMetaObject::connectSlotsByName(OpticalDensityApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpticalDensityApplicationClass)
    {
        OpticalDensityApplicationClass->setWindowTitle(QCoreApplication::translate("OpticalDensityApplicationClass", "OpticalDensityApplication", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpticalDensityApplicationClass: public Ui_OpticalDensityApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTICALDENSITYAPPLICATION_H
