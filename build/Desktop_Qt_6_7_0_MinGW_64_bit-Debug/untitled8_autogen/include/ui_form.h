/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFormLayout *formLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(454, 528);
        Form->setStyleSheet(QString::fromUtf8("background-color:rgb(27, 27, 27);"));
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Form);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat Light")});
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(162, 240, 255);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Kristen ITC")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(162, 240, 255);"));

        verticalLayout->addWidget(label_2, 0, Qt::AlignRight);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(23);
        formLayout->setVerticalSpacing(25);
        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(39, 118, 118);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_4);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(39, 118, 118);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);

        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(39, 118, 118);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_5);

        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(39, 118, 118);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_3);

        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(39, 118, 118);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_2);

        lineEdit_3 = new QLineEdit(Form);
        lineEdit_3->setObjectName("lineEdit_3");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat Medium")});
        font2.setPointSize(12);
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color :rgb(118, 118, 118);\n"
"color:rgb(255, 255, 255)\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color :rgb(118, 118, 118);\n"
"color:rgb(255, 255, 255)\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_4 = new QLineEdit(Form);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font2);
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color :rgb(118, 118, 118);\n"
"color:rgb(255, 255, 255)\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(Form);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font2);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color :rgb(118, 118, 118);\n"
"color:rgb(255, 255, 255)\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color :rgb(118, 118, 118);\n"
"color:rgb(255, 255, 255)\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout->addLayout(formLayout);

        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat Light")});
        font3.setPointSize(11);
        font3.setUnderline(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(162, 240, 255);"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "NOTES", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "              time to dream", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", ")", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", ")", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", ")", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", ")", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "by kapjap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
