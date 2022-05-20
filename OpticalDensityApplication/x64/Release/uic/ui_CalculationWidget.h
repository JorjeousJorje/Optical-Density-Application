/********************************************************************************
** Form generated from reading UI file 'CalculationWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATIONWIDGET_H
#define UI_CALCULATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *startCalculationButton;
    QLabel *calculationIndicator;
    QProgressBar *progressBar;

    void setupUi(QWidget *CalculationWidget)
    {
        if (CalculationWidget->objectName().isEmpty())
            CalculationWidget->setObjectName(QString::fromUtf8("CalculationWidget"));
        CalculationWidget->resize(400, 93);
        verticalLayout = new QVBoxLayout(CalculationWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        startCalculationButton = new QPushButton(CalculationWidget);
        startCalculationButton->setObjectName(QString::fromUtf8("startCalculationButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startCalculationButton->sizePolicy().hasHeightForWidth());
        startCalculationButton->setSizePolicy(sizePolicy);
        startCalculationButton->setIconSize(QSize(16, 25));

        verticalLayout->addWidget(startCalculationButton);

        calculationIndicator = new QLabel(CalculationWidget);
        calculationIndicator->setObjectName(QString::fromUtf8("calculationIndicator"));
        sizePolicy.setHeightForWidth(calculationIndicator->sizePolicy().hasHeightForWidth());
        calculationIndicator->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        calculationIndicator->setFont(font);
        calculationIndicator->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(calculationIndicator);

        progressBar = new QProgressBar(CalculationWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        retranslateUi(CalculationWidget);

        QMetaObject::connectSlotsByName(CalculationWidget);
    } // setupUi

    void retranslateUi(QWidget *CalculationWidget)
    {
        CalculationWidget->setWindowTitle(QCoreApplication::translate("CalculationWidget", "Form", nullptr));
        startCalculationButton->setText(QCoreApplication::translate("CalculationWidget", "Calculate", nullptr));
#if QT_CONFIG(shortcut)
        startCalculationButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        calculationIndicator->setText(QCoreApplication::translate("CalculationWidget", "Waiting for calculations...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculationWidget: public Ui_CalculationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATIONWIDGET_H
