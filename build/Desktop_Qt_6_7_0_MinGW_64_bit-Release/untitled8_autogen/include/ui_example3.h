/********************************************************************************
** Form generated from reading UI file 'example3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE3_H
#define UI_EXAMPLE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_example3
{
public:

    void setupUi(QWidget *example3)
    {
        if (example3->objectName().isEmpty())
            example3->setObjectName("example3");
        example3->resize(400, 300);

        retranslateUi(example3);

        QMetaObject::connectSlotsByName(example3);
    } // setupUi

    void retranslateUi(QWidget *example3)
    {
        example3->setWindowTitle(QCoreApplication::translate("example3", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class example3: public Ui_example3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE3_H
