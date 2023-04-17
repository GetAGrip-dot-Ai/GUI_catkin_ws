/********************************************************************************
** Form generated from reading UI file 'end_effector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_EFFECTOR_H
#define UI_END_EFFECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EndEffector
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *GripperState_lbl;
    QLabel *EEHeader;
    QLabel *CutterState;
    QPushButton *FactoryResetButton;
    QLabel *GripperState;
    QLabel *EEPic;
    QLabel *CutterState_lbl;
    QSpacerItem *verticalSpacer;
    QPushButton *PingMotorButton;
    QLabel *GripperButton_lbl;
    QLabel *CutterButton_lbl;
    QPushButton *CutterOpenButton;
    QPushButton *GripperOpenButton;
    QPushButton *CutterCloseButton;
    QPushButton *GripperCloseButton;

    void setupUi(QWidget *EndEffector)
    {
        if (EndEffector->objectName().isEmpty())
            EndEffector->setObjectName(QString::fromUtf8("EndEffector"));
        EndEffector->resize(400, 298);
        gridLayout = new QGridLayout(EndEffector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        label = new QLabel(EndEffector);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Thin"));
        font.setPointSize(10);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 8, 3, 1, 1);

        GripperState_lbl = new QLabel(EndEffector);
        GripperState_lbl->setObjectName(QString::fromUtf8("GripperState_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GripperState_lbl->sizePolicy().hasHeightForWidth());
        GripperState_lbl->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        GripperState_lbl->setFont(font1);

        gridLayout->addWidget(GripperState_lbl, 2, 0, 1, 1);

        EEHeader = new QLabel(EndEffector);
        EEHeader->setObjectName(QString::fromUtf8("EEHeader"));
        sizePolicy.setHeightForWidth(EEHeader->sizePolicy().hasHeightForWidth());
        EEHeader->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        EEHeader->setFont(font2);
        EEHeader->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(EEHeader, 0, 0, 1, 4);

        CutterState = new QLabel(EndEffector);
        CutterState->setObjectName(QString::fromUtf8("CutterState"));
        CutterState->setFont(font1);

        gridLayout->addWidget(CutterState, 3, 1, 1, 1);

        FactoryResetButton = new QPushButton(EndEffector);
        FactoryResetButton->setObjectName(QString::fromUtf8("FactoryResetButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        FactoryResetButton->setFont(font3);

        gridLayout->addWidget(FactoryResetButton, 8, 1, 1, 2);

        GripperState = new QLabel(EndEffector);
        GripperState->setObjectName(QString::fromUtf8("GripperState"));
        sizePolicy.setHeightForWidth(GripperState->sizePolicy().hasHeightForWidth());
        GripperState->setSizePolicy(sizePolicy);
        GripperState->setFont(font1);

        gridLayout->addWidget(GripperState, 2, 1, 1, 1);

        EEPic = new QLabel(EndEffector);
        EEPic->setObjectName(QString::fromUtf8("EEPic"));
        EEPic->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(EEPic, 1, 2, 4, 2);

        CutterState_lbl = new QLabel(EndEffector);
        CutterState_lbl->setObjectName(QString::fromUtf8("CutterState_lbl"));
        sizePolicy.setHeightForWidth(CutterState_lbl->sizePolicy().hasHeightForWidth());
        CutterState_lbl->setSizePolicy(sizePolicy);
        CutterState_lbl->setFont(font1);

        gridLayout->addWidget(CutterState_lbl, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        PingMotorButton = new QPushButton(EndEffector);
        PingMotorButton->setObjectName(QString::fromUtf8("PingMotorButton"));

        gridLayout->addWidget(PingMotorButton, 7, 1, 1, 2);

        GripperButton_lbl = new QLabel(EndEffector);
        GripperButton_lbl->setObjectName(QString::fromUtf8("GripperButton_lbl"));
        QFont font4;
        font4.setPointSize(12);
        GripperButton_lbl->setFont(font4);
        GripperButton_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(GripperButton_lbl, 5, 0, 1, 1);

        CutterButton_lbl = new QLabel(EndEffector);
        CutterButton_lbl->setObjectName(QString::fromUtf8("CutterButton_lbl"));
        QFont font5;
        font5.setPointSize(12);
        font5.setItalic(false);
        CutterButton_lbl->setFont(font5);
        CutterButton_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(CutterButton_lbl, 6, 0, 1, 1);

        CutterOpenButton = new QPushButton(EndEffector);
        CutterOpenButton->setObjectName(QString::fromUtf8("CutterOpenButton"));

        gridLayout->addWidget(CutterOpenButton, 6, 1, 1, 1);

        GripperOpenButton = new QPushButton(EndEffector);
        GripperOpenButton->setObjectName(QString::fromUtf8("GripperOpenButton"));

        gridLayout->addWidget(GripperOpenButton, 5, 1, 1, 1);

        CutterCloseButton = new QPushButton(EndEffector);
        CutterCloseButton->setObjectName(QString::fromUtf8("CutterCloseButton"));

        gridLayout->addWidget(CutterCloseButton, 6, 2, 1, 1);

        GripperCloseButton = new QPushButton(EndEffector);
        GripperCloseButton->setObjectName(QString::fromUtf8("GripperCloseButton"));

        gridLayout->addWidget(GripperCloseButton, 5, 2, 1, 1);


        retranslateUi(EndEffector);

        QMetaObject::connectSlotsByName(EndEffector);
    } // setupUi

    void retranslateUi(QWidget *EndEffector)
    {
        EndEffector->setWindowTitle(QApplication::translate("EndEffector", "Form", nullptr));
        label->setText(QApplication::translate("EndEffector", "manual operation", nullptr));
        GripperState_lbl->setText(QApplication::translate("EndEffector", "Gripper Status:", nullptr));
        EEHeader->setText(QApplication::translate("EndEffector", "End Effector", nullptr));
        CutterState->setText(QApplication::translate("EndEffector", "---", nullptr));
        FactoryResetButton->setText(QApplication::translate("EndEffector", "Motor Factory Reset", nullptr));
        GripperState->setText(QApplication::translate("EndEffector", "---", nullptr));
        EEPic->setText(QApplication::translate("EndEffector", "(EE Pic)", nullptr));
        CutterState_lbl->setText(QApplication::translate("EndEffector", "Cutter Status:", nullptr));
        PingMotorButton->setText(QApplication::translate("EndEffector", "Ping Motor", nullptr));
        GripperButton_lbl->setText(QApplication::translate("EndEffector", "   Gripper ->", nullptr));
        CutterButton_lbl->setText(QApplication::translate("EndEffector", "   Cutter ->", nullptr));
        CutterOpenButton->setText(QApplication::translate("EndEffector", "Open", nullptr));
        GripperOpenButton->setText(QApplication::translate("EndEffector", "Open", nullptr));
        CutterCloseButton->setText(QApplication::translate("EndEffector", "Close", nullptr));
        GripperCloseButton->setText(QApplication::translate("EndEffector", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndEffector: public Ui_EndEffector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_EFFECTOR_H
