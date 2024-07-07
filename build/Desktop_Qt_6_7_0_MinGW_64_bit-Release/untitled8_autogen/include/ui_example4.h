/********************************************************************************
** Form generated from reading UI file 'example4.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE4_H
#define UI_EXAMPLE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_example1
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *example1)
    {
        if (example1->objectName().isEmpty())
            example1->setObjectName("example1");
        example1->resize(487, 361);
        example1->setStyleSheet(QString::fromUtf8("background-color:rgb(27, 27, 27);"));
        verticalLayout_2 = new QVBoxLayout(example1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(example1);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat Light")});
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(162, 240, 255);"));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_2 = new QLineEdit(example1);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat Medium")});
        font1.setPointSize(12);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color :rgb(118, 118, 118);"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(example1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color :rgb(118, 118, 118);"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_5 = new QLineEdit(example1);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color :rgb(118, 118, 118);"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_4 = new QLineEdit(example1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color :rgb(118, 118, 118);"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit = new QLineEdit(example1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color :rgb(118, 118, 118);"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(example1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat Medium")});
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(162, 240, 255);"));

        verticalLayout_2->addWidget(pushButton);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit_2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(example1);
        QObject::connect(pushButton, &QPushButton::clicked, example1, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(example1);
    } // setupUi

    void retranslateUi(QWidget *example1)
    {
        example1->setWindowTitle(QCoreApplication::translate("example1", "Form", nullptr));
        label->setText(QCoreApplication::translate("example1", "Create a note, bro", nullptr));
        pushButton->setText(QCoreApplication::translate("example1", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class example1: public Ui_example1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE4_H
