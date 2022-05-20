/********************************************************************************
** Form generated from reading UI file 'InputParametersWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPARAMETERSWIDGET_H
#define UI_INPUTPARAMETERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CalculationWidget.h"
#include "ModeInputParametersWidget.h"

QT_BEGIN_NAMESPACE

class Ui_InputParametersWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *concSpinValue;
    QLabel *label_3;
    QSpinBox *concSpinPower;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *massSpin;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *attenuationSpin;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *epsilonSpin;
    QLabel *label_46;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *lbFreqSpin;
    QLabel *label_2;
    QDoubleSpinBox *rbFreqSpin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *pointsSpin;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *filmThicknessSpin;
    QLabel *label_48;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *refractRealSpin;
    QLabel *label_4;
    QDoubleSpinBox *refractImagSpin;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_41;
    QTabWidget *tabWidget;
    QWidget *mode1Tab;
    QVBoxLayout *verticalLayout;
    ModeInputParametersWidget *widget;
    QWidget *mode2Tab;
    QVBoxLayout *verticalLayout_3;
    ModeInputParametersWidget *widget_2;
    QWidget *mode3Tab;
    QVBoxLayout *verticalLayout_4;
    ModeInputParametersWidget *widget_3;
    QWidget *mode4Tab;
    QVBoxLayout *verticalLayout_5;
    ModeInputParametersWidget *widget_4;
    QWidget *mode5Tab;
    QVBoxLayout *verticalLayout_6;
    ModeInputParametersWidget *widget_5;
    QWidget *mode6Tab;
    QVBoxLayout *verticalLayout_7;
    ModeInputParametersWidget *widget_6;
    CalculationWidget *calculationWidget;

    void setupUi(QWidget *InputParametersWidget)
    {
        if (InputParametersWidget->objectName().isEmpty())
            InputParametersWidget->setObjectName(QString::fromUtf8("InputParametersWidget"));
        InputParametersWidget->resize(385, 649);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputParametersWidget->sizePolicy().hasHeightForWidth());
        InputParametersWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(InputParametersWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_42 = new QLabel(InputParametersWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_42->setFont(font);
        label_42->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_42);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        concSpinValue = new QDoubleSpinBox(InputParametersWidget);
        concSpinValue->setObjectName(QString::fromUtf8("concSpinValue"));
        sizePolicy.setHeightForWidth(concSpinValue->sizePolicy().hasHeightForWidth());
        concSpinValue->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        concSpinValue->setFont(font1);
        concSpinValue->setStyleSheet(QString::fromUtf8(""));
        concSpinValue->setDecimals(2);
        concSpinValue->setValue(1.000000000000000);

        horizontalLayout_6->addWidget(concSpinValue);

        label_3 = new QLabel(InputParametersWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        horizontalLayout_6->addWidget(label_3);

        concSpinPower = new QSpinBox(InputParametersWidget);
        concSpinPower->setObjectName(QString::fromUtf8("concSpinPower"));
        sizePolicy.setHeightForWidth(concSpinPower->sizePolicy().hasHeightForWidth());
        concSpinPower->setSizePolicy(sizePolicy);
        concSpinPower->setFont(font1);
        concSpinPower->setMaximum(24);
        concSpinPower->setValue(10);

        horizontalLayout_6->addWidget(concSpinPower);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_43 = new QLabel(InputParametersWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font);
        label_43->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_43);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        massSpin = new QSpinBox(InputParametersWidget);
        massSpin->setObjectName(QString::fromUtf8("massSpin"));
        sizePolicy.setHeightForWidth(massSpin->sizePolicy().hasHeightForWidth());
        massSpin->setSizePolicy(sizePolicy);
        massSpin->setMinimumSize(QSize(0, 18));
        massSpin->setMaximumSize(QSize(16777215, 16777215));
        massSpin->setFont(font1);
        massSpin->setStyleSheet(QString::fromUtf8(""));
        massSpin->setMaximum(200);
        massSpin->setValue(1);

        horizontalLayout_5->addWidget(massSpin);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_44 = new QLabel(InputParametersWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font);
        label_44->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_44);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        attenuationSpin = new QDoubleSpinBox(InputParametersWidget);
        attenuationSpin->setObjectName(QString::fromUtf8("attenuationSpin"));
        sizePolicy.setHeightForWidth(attenuationSpin->sizePolicy().hasHeightForWidth());
        attenuationSpin->setSizePolicy(sizePolicy);
        attenuationSpin->setFont(font1);
        attenuationSpin->setDecimals(2);
        attenuationSpin->setMinimum(-100000000000000000.000000000000000);
        attenuationSpin->setMaximum(1000000000000000000.000000000000000);
        attenuationSpin->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(attenuationSpin);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_45 = new QLabel(InputParametersWidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy);
        label_45->setFont(font);
        label_45->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_45);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        epsilonSpin = new QDoubleSpinBox(InputParametersWidget);
        epsilonSpin->setObjectName(QString::fromUtf8("epsilonSpin"));
        sizePolicy.setHeightForWidth(epsilonSpin->sizePolicy().hasHeightForWidth());
        epsilonSpin->setSizePolicy(sizePolicy);
        epsilonSpin->setFont(font1);
        epsilonSpin->setDecimals(2);
        epsilonSpin->setMaximum(100.000000000000000);
        epsilonSpin->setValue(2.000000000000000);

        horizontalLayout_3->addWidget(epsilonSpin);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_46 = new QLabel(InputParametersWidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font);
        label_46->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_46);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(InputParametersWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        label->setFont(font3);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label);

        lbFreqSpin = new QDoubleSpinBox(InputParametersWidget);
        lbFreqSpin->setObjectName(QString::fromUtf8("lbFreqSpin"));
        sizePolicy.setHeightForWidth(lbFreqSpin->sizePolicy().hasHeightForWidth());
        lbFreqSpin->setSizePolicy(sizePolicy);
        lbFreqSpin->setFont(font1);
        lbFreqSpin->setDecimals(2);
        lbFreqSpin->setMaximum(4999.989999999999782);
        lbFreqSpin->setValue(5.000000000000000);

        horizontalLayout->addWidget(lbFreqSpin);

        label_2 = new QLabel(InputParametersWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_2);

        rbFreqSpin = new QDoubleSpinBox(InputParametersWidget);
        rbFreqSpin->setObjectName(QString::fromUtf8("rbFreqSpin"));
        sizePolicy.setHeightForWidth(rbFreqSpin->sizePolicy().hasHeightForWidth());
        rbFreqSpin->setSizePolicy(sizePolicy);
        rbFreqSpin->setFont(font1);
        rbFreqSpin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        rbFreqSpin->setReadOnly(false);
        rbFreqSpin->setDecimals(2);
        rbFreqSpin->setMaximum(5000.000000000000000);
        rbFreqSpin->setValue(1000.000000000000000);

        horizontalLayout->addWidget(rbFreqSpin);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(InputParametersWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_5);

        pointsSpin = new QSpinBox(InputParametersWidget);
        pointsSpin->setObjectName(QString::fromUtf8("pointsSpin"));
        sizePolicy.setHeightForWidth(pointsSpin->sizePolicy().hasHeightForWidth());
        pointsSpin->setSizePolicy(sizePolicy);
        pointsSpin->setMinimumSize(QSize(0, 18));
        pointsSpin->setMaximumSize(QSize(243, 18));
        pointsSpin->setFont(font1);
        pointsSpin->setStyleSheet(QString::fromUtf8(""));
        pointsSpin->setMaximum(1000000000);
        pointsSpin->setValue(1000);

        horizontalLayout_2->addWidget(pointsSpin);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_47 = new QLabel(InputParametersWidget);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setFont(font);
        label_47->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_47);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        filmThicknessSpin = new QDoubleSpinBox(InputParametersWidget);
        filmThicknessSpin->setObjectName(QString::fromUtf8("filmThicknessSpin"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filmThicknessSpin->sizePolicy().hasHeightForWidth());
        filmThicknessSpin->setSizePolicy(sizePolicy2);
        filmThicknessSpin->setFont(font1);
        filmThicknessSpin->setDecimals(2);
        filmThicknessSpin->setMaximum(10000000000.000000000000000);
        filmThicknessSpin->setValue(100.000000000000000);

        horizontalLayout_7->addWidget(filmThicknessSpin);


        verticalLayout_2->addLayout(horizontalLayout_7);

        label_48 = new QLabel(InputParametersWidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setFont(font);
        label_48->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_48);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        refractRealSpin = new QDoubleSpinBox(InputParametersWidget);
        refractRealSpin->setObjectName(QString::fromUtf8("refractRealSpin"));
        sizePolicy2.setHeightForWidth(refractRealSpin->sizePolicy().hasHeightForWidth());
        refractRealSpin->setSizePolicy(sizePolicy2);
        refractRealSpin->setFont(font1);
        refractRealSpin->setDecimals(2);
        refractRealSpin->setMaximum(1000000000.000000000000000);
        refractRealSpin->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(refractRealSpin);

        label_4 = new QLabel(InputParametersWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);

        horizontalLayout_8->addWidget(label_4);

        refractImagSpin = new QDoubleSpinBox(InputParametersWidget);
        refractImagSpin->setObjectName(QString::fromUtf8("refractImagSpin"));
        sizePolicy2.setHeightForWidth(refractImagSpin->sizePolicy().hasHeightForWidth());
        refractImagSpin->setSizePolicy(sizePolicy2);
        refractImagSpin->setFont(font1);
        refractImagSpin->setDecimals(2);
        refractImagSpin->setMaximum(10000000000.000000000000000);
        refractImagSpin->setValue(0.000000000000000);

        horizontalLayout_8->addWidget(refractImagSpin);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_8);

        label_41 = new QLabel(InputParametersWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        label_41->setFont(font4);
        label_41->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        verticalLayout_2->addWidget(label_41);

        tabWidget = new QTabWidget(InputParametersWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        mode1Tab = new QWidget();
        mode1Tab->setObjectName(QString::fromUtf8("mode1Tab"));
        verticalLayout = new QVBoxLayout(mode1Tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new ModeInputParametersWidget(mode1Tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget);

        tabWidget->addTab(mode1Tab, QString());
        mode2Tab = new QWidget();
        mode2Tab->setObjectName(QString::fromUtf8("mode2Tab"));
        verticalLayout_3 = new QVBoxLayout(mode2Tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new ModeInputParametersWidget(mode2Tab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(widget_2);

        tabWidget->addTab(mode2Tab, QString());
        mode3Tab = new QWidget();
        mode3Tab->setObjectName(QString::fromUtf8("mode3Tab"));
        verticalLayout_4 = new QVBoxLayout(mode3Tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_3 = new ModeInputParametersWidget(mode3Tab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(widget_3);

        tabWidget->addTab(mode3Tab, QString());
        mode4Tab = new QWidget();
        mode4Tab->setObjectName(QString::fromUtf8("mode4Tab"));
        verticalLayout_5 = new QVBoxLayout(mode4Tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_4 = new ModeInputParametersWidget(mode4Tab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(widget_4);

        tabWidget->addTab(mode4Tab, QString());
        mode5Tab = new QWidget();
        mode5Tab->setObjectName(QString::fromUtf8("mode5Tab"));
        verticalLayout_6 = new QVBoxLayout(mode5Tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_5 = new ModeInputParametersWidget(mode5Tab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(widget_5);

        tabWidget->addTab(mode5Tab, QString());
        mode6Tab = new QWidget();
        mode6Tab->setObjectName(QString::fromUtf8("mode6Tab"));
        verticalLayout_7 = new QVBoxLayout(mode6Tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_6 = new ModeInputParametersWidget(mode6Tab);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(widget_6);

        tabWidget->addTab(mode6Tab, QString());

        verticalLayout_2->addWidget(tabWidget);

        calculationWidget = new CalculationWidget(InputParametersWidget);
        calculationWidget->setObjectName(QString::fromUtf8("calculationWidget"));
        sizePolicy.setHeightForWidth(calculationWidget->sizePolicy().hasHeightForWidth());
        calculationWidget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(calculationWidget);


        retranslateUi(InputParametersWidget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(InputParametersWidget);
    } // setupUi

    void retranslateUi(QWidget *InputParametersWidget)
    {
        InputParametersWidget->setWindowTitle(QCoreApplication::translate("InputParametersWidget", "Form", nullptr));
        label_42->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Concentration <span style=\" font-weight:600;\">N</span><span style=\" font-weight:600; vertical-align:sub;\">0</span><span style=\" vertical-align:sub;\"/>(cm<span style=\" vertical-align:super;\">-3</span>)</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("InputParametersWidget", "^", nullptr));
        label_43->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Mass <span style=\" font-weight:600;\">m</span><span style=\" font-weight:600; vertical-align:sub;\">0</span> (m<span style=\" vertical-align:sub;\">a</span>)</p></body></html>", nullptr));
        label_44->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Attenuation of oscillations <span style=\" font-weight:600;\">\320\223</span><span style=\" font-weight:600; vertical-align:sub;\">0</span> (cm<span style=\" vertical-align:super;\">-1</span>)</p></body></html>", nullptr));
        label_45->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Epsilon</p></body></html>", nullptr));
        label_46->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Frequencies</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>v<span style=\" vertical-align:sub;\">0</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>v<span style=\" vertical-align:sub;\">1</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>points count</p></body></html>", nullptr));
        label_47->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Film thickness <span style=\" font-weight:600;\">d</span> (cm into nm)</p></body></html>", nullptr));
        label_48->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Refractive index <span style=\" font-weight:600;\">N</span><span style=\" font-weight:600; vertical-align:sub;\">m</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>+ <span style=\" font-weight:600;\">i</span></p></body></html>", nullptr));
        label_41->setText(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p>Modes parameters</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("InputParametersWidget", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(mode1Tab), QCoreApplication::translate("InputParametersWidget", "Mode 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mode2Tab), QCoreApplication::translate("InputParametersWidget", "Mode 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mode3Tab), QCoreApplication::translate("InputParametersWidget", "Mode 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mode4Tab), QCoreApplication::translate("InputParametersWidget", "Mode 4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mode5Tab), QCoreApplication::translate("InputParametersWidget", "Mode 5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mode6Tab), QCoreApplication::translate("InputParametersWidget", "Mode 6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputParametersWidget: public Ui_InputParametersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPARAMETERSWIDGET_H
