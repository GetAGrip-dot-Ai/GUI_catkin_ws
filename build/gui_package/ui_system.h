/********************************************************************************
** Form generated from reading UI file 'system.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_H
#define UI_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System
{
public:
    QGridLayout *gridLayout;
    QLabel *Header;
    QSpacerItem *verticalSpacer;
    QLabel *peppers_found_lbl;
    QLabel *peppers_found;
    QSpacerItem *horizontalSpacer;
    QLabel *Kinova_pic;
    QLabel *peppers_harvested_lbl;
    QLabel *peppers_harvested;
    QSpacerItem *verticalSpacer_2;
    QLabel *joint_1_lbl;
    QLabel *chatter;
    QLabel *joint_2_lbl;
    QLabel *joint_2;
    QLabel *joint_3_lbl;
    QLabel *joint_3;
    QLabel *joint_4_lbl;
    QLabel *joint_4;
    QLabel *joint_5_lbl;
    QLabel *joint_5;
    QLabel *joint_6_lbl;
    QLabel *joint_6;
    QPushButton *manual_butt;
    QPushButton *automatic_butt;
    QLabel *current_state_lbl;
    QLabel *current_state;
    QSpacerItem *verticalSpacer_3;
    QLabel *goal_state_lbl;
    QLabel *goal_state;
    QPushButton *hi_button;
    QSpinBox *hi_num;

    void setupUi(QWidget *System)
    {
        if (System->objectName().isEmpty())
            System->setObjectName(QString::fromUtf8("System"));
        System->resize(471, 351);
        gridLayout = new QGridLayout(System);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Header = new QLabel(System);
        Header->setObjectName(QString::fromUtf8("Header"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Header->sizePolicy().hasHeightForWidth());
        Header->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Lohit Gurmukhi"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        Header->setFont(font);
        Header->setTextFormat(Qt::AutoText);
        Header->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Header, 0, 0, 1, 7);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        peppers_found_lbl = new QLabel(System);
        peppers_found_lbl->setObjectName(QString::fromUtf8("peppers_found_lbl"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        peppers_found_lbl->setFont(font1);

        gridLayout->addWidget(peppers_found_lbl, 2, 0, 1, 2);

        peppers_found = new QLabel(System);
        peppers_found->setObjectName(QString::fromUtf8("peppers_found"));
        peppers_found->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(peppers_found, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        Kinova_pic = new QLabel(System);
        Kinova_pic->setObjectName(QString::fromUtf8("Kinova_pic"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Kinova_pic->sizePolicy().hasHeightForWidth());
        Kinova_pic->setSizePolicy(sizePolicy1);
        Kinova_pic->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(Kinova_pic, 2, 4, 9, 3);

        peppers_harvested_lbl = new QLabel(System);
        peppers_harvested_lbl->setObjectName(QString::fromUtf8("peppers_harvested_lbl"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        peppers_harvested_lbl->setFont(font2);

        gridLayout->addWidget(peppers_harvested_lbl, 3, 0, 1, 2);

        peppers_harvested = new QLabel(System);
        peppers_harvested->setObjectName(QString::fromUtf8("peppers_harvested"));
        peppers_harvested->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(peppers_harvested, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        joint_1_lbl = new QLabel(System);
        joint_1_lbl->setObjectName(QString::fromUtf8("joint_1_lbl"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(joint_1_lbl->sizePolicy().hasHeightForWidth());
        joint_1_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_1_lbl, 5, 0, 1, 1);

        chatter = new QLabel(System);
        chatter->setObjectName(QString::fromUtf8("chatter"));

        gridLayout->addWidget(chatter, 5, 2, 1, 1);

        joint_2_lbl = new QLabel(System);
        joint_2_lbl->setObjectName(QString::fromUtf8("joint_2_lbl"));
        sizePolicy2.setHeightForWidth(joint_2_lbl->sizePolicy().hasHeightForWidth());
        joint_2_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_2_lbl, 6, 0, 1, 1);

        joint_2 = new QLabel(System);
        joint_2->setObjectName(QString::fromUtf8("joint_2"));

        gridLayout->addWidget(joint_2, 6, 2, 1, 1);

        joint_3_lbl = new QLabel(System);
        joint_3_lbl->setObjectName(QString::fromUtf8("joint_3_lbl"));
        sizePolicy2.setHeightForWidth(joint_3_lbl->sizePolicy().hasHeightForWidth());
        joint_3_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_3_lbl, 7, 0, 1, 1);

        joint_3 = new QLabel(System);
        joint_3->setObjectName(QString::fromUtf8("joint_3"));

        gridLayout->addWidget(joint_3, 7, 2, 1, 1);

        joint_4_lbl = new QLabel(System);
        joint_4_lbl->setObjectName(QString::fromUtf8("joint_4_lbl"));
        sizePolicy2.setHeightForWidth(joint_4_lbl->sizePolicy().hasHeightForWidth());
        joint_4_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_4_lbl, 8, 0, 1, 1);

        joint_4 = new QLabel(System);
        joint_4->setObjectName(QString::fromUtf8("joint_4"));

        gridLayout->addWidget(joint_4, 8, 2, 1, 1);

        joint_5_lbl = new QLabel(System);
        joint_5_lbl->setObjectName(QString::fromUtf8("joint_5_lbl"));
        sizePolicy2.setHeightForWidth(joint_5_lbl->sizePolicy().hasHeightForWidth());
        joint_5_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_5_lbl, 9, 0, 1, 1);

        joint_5 = new QLabel(System);
        joint_5->setObjectName(QString::fromUtf8("joint_5"));

        gridLayout->addWidget(joint_5, 9, 2, 1, 1);

        joint_6_lbl = new QLabel(System);
        joint_6_lbl->setObjectName(QString::fromUtf8("joint_6_lbl"));
        sizePolicy2.setHeightForWidth(joint_6_lbl->sizePolicy().hasHeightForWidth());
        joint_6_lbl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(joint_6_lbl, 10, 0, 1, 1);

        joint_6 = new QLabel(System);
        joint_6->setObjectName(QString::fromUtf8("joint_6"));

        gridLayout->addWidget(joint_6, 10, 2, 1, 1);

        manual_butt = new QPushButton(System);
        manual_butt->setObjectName(QString::fromUtf8("manual_butt"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(manual_butt->sizePolicy().hasHeightForWidth());
        manual_butt->setSizePolicy(sizePolicy3);
        manual_butt->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(manual_butt, 11, 0, 1, 4);

        automatic_butt = new QPushButton(System);
        automatic_butt->setObjectName(QString::fromUtf8("automatic_butt"));

        gridLayout->addWidget(automatic_butt, 11, 5, 1, 2);

        current_state_lbl = new QLabel(System);
        current_state_lbl->setObjectName(QString::fromUtf8("current_state_lbl"));
        QPalette palette;
        QBrush brush(QColor(239, 41, 41, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        current_state_lbl->setPalette(palette);
        current_state_lbl->setFont(font2);
        current_state_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(current_state_lbl, 12, 0, 1, 2);

        current_state = new QLabel(System);
        current_state->setObjectName(QString::fromUtf8("current_state"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        current_state->setPalette(palette1);
        current_state->setFont(font2);

        gridLayout->addWidget(current_state, 12, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 12, 4, 1, 1);

        goal_state_lbl = new QLabel(System);
        goal_state_lbl->setObjectName(QString::fromUtf8("goal_state_lbl"));
        QPalette palette2;
        QBrush brush2(QColor(78, 154, 6, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        goal_state_lbl->setPalette(palette2);
        goal_state_lbl->setFont(font2);
        goal_state_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(goal_state_lbl, 12, 5, 1, 1);

        goal_state = new QLabel(System);
        goal_state->setObjectName(QString::fromUtf8("goal_state"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        goal_state->setPalette(palette3);
        goal_state->setFont(font2);

        gridLayout->addWidget(goal_state, 12, 6, 1, 1);

        hi_button = new QPushButton(System);
        hi_button->setObjectName(QString::fromUtf8("hi_button"));

        gridLayout->addWidget(hi_button, 13, 0, 1, 2);

        hi_num = new QSpinBox(System);
        hi_num->setObjectName(QString::fromUtf8("hi_num"));

        gridLayout->addWidget(hi_num, 13, 6, 1, 1);


        retranslateUi(System);

        QMetaObject::connectSlotsByName(System);
    } // setupUi

    void retranslateUi(QWidget *System)
    {
        System->setWindowTitle(QApplication::translate("System", "Form", nullptr));
        Header->setText(QApplication::translate("System", "GetAGrip.AI", nullptr));
        peppers_found_lbl->setText(QApplication::translate("System", "Peppers Found:", nullptr));
        peppers_found->setText(QApplication::translate("System", "---", nullptr));
        Kinova_pic->setText(QApplication::translate("System", "(KINOVA PIC)", nullptr));
        peppers_harvested_lbl->setText(QApplication::translate("System", "Peppers Harvested:", nullptr));
        peppers_harvested->setText(QApplication::translate("System", "---", nullptr));
        joint_1_lbl->setText(QApplication::translate("System", "Joint 1:", nullptr));
        chatter->setText(QApplication::translate("System", "---", nullptr));
        joint_2_lbl->setText(QApplication::translate("System", "Joint 2: ", nullptr));
        joint_2->setText(QApplication::translate("System", "---", nullptr));
        joint_3_lbl->setText(QApplication::translate("System", "Joint 3:", nullptr));
        joint_3->setText(QApplication::translate("System", "---", nullptr));
        joint_4_lbl->setText(QApplication::translate("System", "Joint 4:", nullptr));
        joint_4->setText(QApplication::translate("System", "---", nullptr));
        joint_5_lbl->setText(QApplication::translate("System", "Joint 5:", nullptr));
        joint_5->setText(QApplication::translate("System", "---", nullptr));
        joint_6_lbl->setText(QApplication::translate("System", "Joint 6:", nullptr));
        joint_6->setText(QApplication::translate("System", "---", nullptr));
        manual_butt->setText(QApplication::translate("System", "Manual", nullptr));
        automatic_butt->setText(QApplication::translate("System", "Autonomous", nullptr));
        current_state_lbl->setText(QApplication::translate("System", "Current State:   ", nullptr));
        current_state->setText(QApplication::translate("System", "---", nullptr));
        goal_state_lbl->setText(QApplication::translate("System", "Goal State:   ", nullptr));
        goal_state->setText(QApplication::translate("System", "---", nullptr));
        hi_button->setText(QApplication::translate("System", "Say Hi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System: public Ui_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_H
