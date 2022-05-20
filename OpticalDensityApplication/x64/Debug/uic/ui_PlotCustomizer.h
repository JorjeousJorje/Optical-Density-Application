/********************************************************************************
** Form generated from reading UI file 'PlotCustomizer.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTCUSTOMIZER_H
#define UI_PLOTCUSTOMIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_plotCustomizer
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *headerLabel;
    QCheckBox *selectedGraphsBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_3;
    QLabel *linetypeLabel;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *linetypeLcd;
    QSlider *linetypeSlider;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QLabel *thicknessLabel;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *thicknessLcd;
    QSlider *thicknessSlider;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *changeColorButton;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *setBrushButton;
    QPushButton *removeBrushButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *brushLabel;
    QSpinBox *brushAlphaSpinBox;
    QFrame *line_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *plotCustomizer)
    {
        if (plotCustomizer->objectName().isEmpty())
            plotCustomizer->setObjectName(QString::fromUtf8("plotCustomizer"));
        plotCustomizer->resize(391, 385);
        verticalLayout_4 = new QVBoxLayout(plotCustomizer);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        headerLabel = new QLabel(plotCustomizer);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        QFont font;
        font.setPointSize(16);
        headerLabel->setFont(font);
        headerLabel->setScaledContents(false);
        headerLabel->setAlignment(Qt::AlignCenter);
        headerLabel->setWordWrap(false);
        headerLabel->setOpenExternalLinks(false);

        verticalLayout_4->addWidget(headerLabel);

        selectedGraphsBox = new QCheckBox(plotCustomizer);
        selectedGraphsBox->setObjectName(QString::fromUtf8("selectedGraphsBox"));
        QFont font1;
        font1.setPointSize(12);
        selectedGraphsBox->setFont(font1);
        selectedGraphsBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 13px;\n"
"    height: 25px;\n"
"}"));

        verticalLayout_4->addWidget(selectedGraphsBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line_3 = new QFrame(plotCustomizer);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        linetypeLabel = new QLabel(plotCustomizer);
        linetypeLabel->setObjectName(QString::fromUtf8("linetypeLabel"));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        linetypeLabel->setFont(font2);
        linetypeLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        linetypeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(linetypeLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        linetypeLcd = new QLCDNumber(plotCustomizer);
        linetypeLcd->setObjectName(QString::fromUtf8("linetypeLcd"));

        horizontalLayout_2->addWidget(linetypeLcd);

        linetypeSlider = new QSlider(plotCustomizer);
        linetypeSlider->setObjectName(QString::fromUtf8("linetypeSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linetypeSlider->sizePolicy().hasHeightForWidth());
        linetypeSlider->setSizePolicy(sizePolicy);
        linetypeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 45px;\n"
" }"));
        linetypeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(linetypeSlider);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        line_2 = new QFrame(plotCustomizer);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        thicknessLabel = new QLabel(plotCustomizer);
        thicknessLabel->setObjectName(QString::fromUtf8("thicknessLabel"));
        thicknessLabel->setFont(font1);
        thicknessLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        thicknessLabel->setTextFormat(Qt::AutoText);
        thicknessLabel->setScaledContents(false);
        thicknessLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(thicknessLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        thicknessLcd = new QLCDNumber(plotCustomizer);
        thicknessLcd->setObjectName(QString::fromUtf8("thicknessLcd"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thicknessLcd->sizePolicy().hasHeightForWidth());
        thicknessLcd->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(thicknessLcd);

        thicknessSlider = new QSlider(plotCustomizer);
        thicknessSlider->setObjectName(QString::fromUtf8("thicknessSlider"));
        sizePolicy.setHeightForWidth(thicknessSlider->sizePolicy().hasHeightForWidth());
        thicknessSlider->setSizePolicy(sizePolicy);
        thicknessSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 45px;\n"
" }"));
        thicknessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(thicknessSlider);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        line = new QFrame(plotCustomizer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        changeColorButton = new QPushButton(plotCustomizer);
        changeColorButton->setObjectName(QString::fromUtf8("changeColorButton"));
        changeColorButton->setFont(font1);
        changeColorButton->setCheckable(false);
        changeColorButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(changeColorButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        line_4 = new QFrame(plotCustomizer);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        setBrushButton = new QPushButton(plotCustomizer);
        setBrushButton->setObjectName(QString::fromUtf8("setBrushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(setBrushButton->sizePolicy().hasHeightForWidth());
        setBrushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(setBrushButton);

        removeBrushButton = new QPushButton(plotCustomizer);
        removeBrushButton->setObjectName(QString::fromUtf8("removeBrushButton"));
        sizePolicy2.setHeightForWidth(removeBrushButton->sizePolicy().hasHeightForWidth());
        removeBrushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(removeBrushButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        brushLabel = new QLabel(plotCustomizer);
        brushLabel->setObjectName(QString::fromUtf8("brushLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(brushLabel->sizePolicy().hasHeightForWidth());
        brushLabel->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(brushLabel);

        brushAlphaSpinBox = new QSpinBox(plotCustomizer);
        brushAlphaSpinBox->setObjectName(QString::fromUtf8("brushAlphaSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(brushAlphaSpinBox->sizePolicy().hasHeightForWidth());
        brushAlphaSpinBox->setSizePolicy(sizePolicy4);
        brushAlphaSpinBox->setMaximum(255);
        brushAlphaSpinBox->setValue(20);

        verticalLayout_3->addWidget(brushAlphaSpinBox);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_5 = new QFrame(plotCustomizer);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(plotCustomizer);

        QMetaObject::connectSlotsByName(plotCustomizer);
    } // setupUi

    void retranslateUi(QDialog *plotCustomizer)
    {
        plotCustomizer->setWindowTitle(QCoreApplication::translate("plotCustomizer", "Dialog", nullptr));
        headerLabel->setText(QCoreApplication::translate("plotCustomizer", "Customization parameters", nullptr));
        selectedGraphsBox->setText(QCoreApplication::translate("plotCustomizer", "Apply changes only for selected graphs", nullptr));
        linetypeLabel->setText(QCoreApplication::translate("plotCustomizer", "Line type", nullptr));
        thicknessLabel->setText(QCoreApplication::translate("plotCustomizer", "Line thickness (px)", nullptr));
        changeColorButton->setText(QCoreApplication::translate("plotCustomizer", "Change graph color", nullptr));
        setBrushButton->setText(QCoreApplication::translate("plotCustomizer", "Set Brush", nullptr));
        removeBrushButton->setText(QCoreApplication::translate("plotCustomizer", "Remove Brush", nullptr));
        brushLabel->setText(QCoreApplication::translate("plotCustomizer", "Brush alpha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plotCustomizer: public Ui_plotCustomizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTCUSTOMIZER_H
