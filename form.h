#ifndef FORM_H
#define FORM_H
#include <QWidget>
#include "example1.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form *ui;
    example1 *Example1;
    example1 *Example2;
    example1 *Example3;
    example1 *Example4;
    example1 *Example5;
    QString MyText;
};

#endif // FORM_H
