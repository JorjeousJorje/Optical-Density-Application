/********************************************************************************
** Form generated from reading UI file 'AxisModifierWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISMODIFIERWIDGET_H
#define UI_AXISMODIFIERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AxisModifierWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QPushButton *logScaleButton;
    QPushButton *addAxisButton;
    QPushButton *removeAxisButton;
    QPushButton *newGraphAxisButton;
    QPushButton *rescaleAxesButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AxisModifierWidget)
    {
        if (AxisModifierWidget->objectName().isEmpty())
            AxisModifierWidget->setObjectName(QString::fromUtf8("AxisModifierWidget"));
        AxisModifierWidget->resize(691, 85);
        verticalLayout = new QVBoxLayout(AxisModifierWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        splitter = new QSplitter(AxisModifierWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        logScaleButton = new QPushButton(splitter);
        logScaleButton->setObjectName(QString::fromUtf8("logScaleButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logScaleButton->sizePolicy().hasHeightForWidth());
        logScaleButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        logScaleButton->setFont(font);
        logScaleButton->setCheckable(true);
        splitter->addWidget(logScaleButton);
        addAxisButton = new QPushButton(splitter);
        addAxisButton->setObjectName(QString::fromUtf8("addAxisButton"));
        sizePolicy.setHeightForWidth(addAxisButton->sizePolicy().hasHeightForWidth());
        addAxisButton->setSizePolicy(sizePolicy);
        addAxisButton->setFont(font);
        splitter->addWidget(addAxisButton);
        removeAxisButton = new QPushButton(splitter);
        removeAxisButton->setObjectName(QString::fromUtf8("removeAxisButton"));
        sizePolicy.setHeightForWidth(removeAxisButton->sizePolicy().hasHeightForWidth());
        removeAxisButton->setSizePolicy(sizePolicy);
        removeAxisButton->setFont(font);
        splitter->addWidget(removeAxisButton);
        newGraphAxisButton = new QPushButton(splitter);
        newGraphAxisButton->setObjectName(QString::fromUtf8("newGraphAxisButton"));
        sizePolicy.setHeightForWidth(newGraphAxisButton->sizePolicy().hasHeightForWidth());
        newGraphAxisButton->setSizePolicy(sizePolicy);
        newGraphAxisButton->setFont(font);
        newGraphAxisButton->setStyleSheet(QString::fromUtf8(""));
        newGraphAxisButton->setCheckable(true);
        newGraphAxisButton->setChecked(true);
        splitter->addWidget(newGraphAxisButton);
        rescaleAxesButton = new QPushButton(splitter);
        rescaleAxesButton->setObjectName(QString::fromUtf8("rescaleAxesButton"));
        sizePolicy.setHeightForWidth(rescaleAxesButton->sizePolicy().hasHeightForWidth());
        rescaleAxesButton->setSizePolicy(sizePolicy);
        rescaleAxesButton->setFont(font);
        splitter->addWidget(rescaleAxesButton);

        horizontalLayout->addWidget(splitter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AxisModifierWidget);

        QMetaObject::connectSlotsByName(AxisModifierWidget);
    } // setupUi

    void retranslateUi(QWidget *AxisModifierWidget)
    {
        AxisModifierWidget->setWindowTitle(QCoreApplication::translate("AxisModifierWidget", "Form", nullptr));
        logScaleButton->setText(QCoreApplication::translate("AxisModifierWidget", "Log scale", nullptr));
        addAxisButton->setText(QCoreApplication::translate("AxisModifierWidget", "Add\n"
" axis for\n"
"selected", nullptr));
        removeAxisButton->setText(QCoreApplication::translate("AxisModifierWidget", "Remove\n"
"every axis", nullptr));
        newGraphAxisButton->setText(QCoreApplication::translate("AxisModifierWidget", "Add axis\n"
" for\n"
"new graph", nullptr));
        rescaleAxesButton->setText(QCoreApplication::translate("AxisModifierWidget", "Rescale\n"
"axes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AxisModifierWidget: public Ui_AxisModifierWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISMODIFIERWIDGET_H
