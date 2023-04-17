/********************************************************************************
** Form generated from reading UI file 'perception.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERCEPTION_H
#define UI_PERCEPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Perception
{
public:

    void setupUi(QWidget *Perception)
    {
        if (Perception->objectName().isEmpty())
            Perception->setObjectName(QString::fromUtf8("Perception"));
        Perception->resize(400, 300);

        retranslateUi(Perception);

        QMetaObject::connectSlotsByName(Perception);
    } // setupUi

    void retranslateUi(QWidget *Perception)
    {
        Perception->setWindowTitle(QApplication::translate("Perception", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Perception: public Ui_Perception {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERCEPTION_H
