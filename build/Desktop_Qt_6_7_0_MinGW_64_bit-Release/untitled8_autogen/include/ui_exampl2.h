/********************************************************************************
** Form generated from reading UI file 'exampl2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPL2_H
#define UI_EXAMPL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exampl2
{
public:

    void setupUi(QWidget *exampl2)
    {
        if (exampl2->objectName().isEmpty())
            exampl2->setObjectName("exampl2");
        exampl2->resize(400, 300);

        retranslateUi(exampl2);

        QMetaObject::connectSlotsByName(exampl2);
    } // setupUi

    void retranslateUi(QWidget *exampl2)
    {
        exampl2->setWindowTitle(QCoreApplication::translate("exampl2", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exampl2: public Ui_exampl2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPL2_H
