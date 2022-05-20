/********************************************************************************
** Form generated from reading UI file 'ModeInputParametersWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEINPUTPARAMETERSWIDGET_H
#define UI_MODEINPUTPARAMETERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeInputParametersWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *concSpinValue;
    QSpinBox *concSpinPower;
    QLabel *label2;
    QSpinBox *massSpin;
    QLabel *label5;
    QSpinBox *chargeSpin;
    QLabel *label4;
    QDoubleSpinBox *freqSpin;
    QLabel *label3;
    QDoubleSpinBox *attenuationSpin;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ModeInputParametersWidget)
    {
        if (ModeInputParametersWidget->objectName().isEmpty())
            ModeInputParametersWidget->setObjectName(QString::fromUtf8("ModeInputParametersWidget"));
        ModeInputParametersWidget->resize(230, 304);
        verticalLayout = new QVBoxLayout(ModeInputParametersWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label1 = new QLabel(ModeInputParametersWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label1->setFont(font);

        verticalLayout->addWidget(label1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        concSpinValue = new QDoubleSpinBox(ModeInputParametersWidget);
        concSpinValue->setObjectName(QString::fromUtf8("concSpinValue"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(concSpinValue->sizePolicy().hasHeightForWidth());
        concSpinValue->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        concSpinValue->setFont(font1);
        concSpinValue->setValue(1.000000000000000);

        horizontalLayout->addWidget(concSpinValue);

        concSpinPower = new QSpinBox(ModeInputParametersWidget);
        concSpinPower->setObjectName(QString::fromUtf8("concSpinPower"));
        sizePolicy.setHeightForWidth(concSpinPower->sizePolicy().hasHeightForWidth());
        concSpinPower->setSizePolicy(sizePolicy);
        concSpinPower->setFont(font1);
        concSpinPower->setMaximum(24);
        concSpinPower->setValue(1);

        horizontalLayout->addWidget(concSpinPower);


        verticalLayout->addLayout(horizontalLayout);

        label2 = new QLabel(ModeInputParametersWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setFont(font);

        verticalLayout->addWidget(label2);

        massSpin = new QSpinBox(ModeInputParametersWidget);
        massSpin->setObjectName(QString::fromUtf8("massSpin"));
        sizePolicy.setHeightForWidth(massSpin->sizePolicy().hasHeightForWidth());
        massSpin->setSizePolicy(sizePolicy);
        massSpin->setFont(font1);
        massSpin->setMinimum(1);
        massSpin->setMaximum(200);
        massSpin->setValue(1);

        verticalLayout->addWidget(massSpin);

        label5 = new QLabel(ModeInputParametersWidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setFont(font);

        verticalLayout->addWidget(label5);

        chargeSpin = new QSpinBox(ModeInputParametersWidget);
        chargeSpin->setObjectName(QString::fromUtf8("chargeSpin"));
        sizePolicy.setHeightForWidth(chargeSpin->sizePolicy().hasHeightForWidth());
        chargeSpin->setSizePolicy(sizePolicy);
        chargeSpin->setFont(font1);
        chargeSpin->setMaximum(4);
        chargeSpin->setValue(1);

        verticalLayout->addWidget(chargeSpin);

        label4 = new QLabel(ModeInputParametersWidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setFont(font);

        verticalLayout->addWidget(label4);

        freqSpin = new QDoubleSpinBox(ModeInputParametersWidget);
        freqSpin->setObjectName(QString::fromUtf8("freqSpin"));
        sizePolicy.setHeightForWidth(freqSpin->sizePolicy().hasHeightForWidth());
        freqSpin->setSizePolicy(sizePolicy);
        freqSpin->setFont(font1);
        freqSpin->setMinimum(0.000000000000000);
        freqSpin->setMaximum(100000000000000000.000000000000000);
        freqSpin->setValue(1.000000000000000);

        verticalLayout->addWidget(freqSpin);

        label3 = new QLabel(ModeInputParametersWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setFont(font);

        verticalLayout->addWidget(label3);

        attenuationSpin = new QDoubleSpinBox(ModeInputParametersWidget);
        attenuationSpin->setObjectName(QString::fromUtf8("attenuationSpin"));
        sizePolicy.setHeightForWidth(attenuationSpin->sizePolicy().hasHeightForWidth());
        attenuationSpin->setSizePolicy(sizePolicy);
        attenuationSpin->setFont(font1);
        attenuationSpin->setMinimum(-10000000000000000.000000000000000);
        attenuationSpin->setMaximum(10000000000000000.000000000000000);
        attenuationSpin->setValue(1.000000000000000);

        verticalLayout->addWidget(attenuationSpin);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ModeInputParametersWidget);

        QMetaObject::connectSlotsByName(ModeInputParametersWidget);
    } // setupUi

    void retranslateUi(QWidget *ModeInputParametersWidget)
    {
        ModeInputParametersWidget->setWindowTitle(QCoreApplication::translate("ModeInputParametersWidget", "Form", nullptr));
        label1->setText(QCoreApplication::translate("ModeInputParametersWidget", "<html><head/><body><p>Concentration (cm<span style=\" vertical-align:super;\">-3</span>)</p></body></html>", nullptr));
        label2->setText(QCoreApplication::translate("ModeInputParametersWidget", "<html><head/><body><p>Mass (m<span style=\" vertical-align:sub;\">a</span>)</p></body></html>", nullptr));
        label5->setText(QCoreApplication::translate("ModeInputParametersWidget", "Effective charge (e)", nullptr));
        label4->setText(QCoreApplication::translate("ModeInputParametersWidget", "<html><head/><body><p>Oscillation frequency (cm<span style=\" vertical-align:super;\">-1</span>)</p></body></html>", nullptr));
        label3->setText(QCoreApplication::translate("ModeInputParametersWidget", "<html><head/><body><p>Attenuation of oscillations (cm<span style=\" vertical-align:super;\">-1</span>)</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModeInputParametersWidget: public Ui_ModeInputParametersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEINPUTPARAMETERSWIDGET_H
