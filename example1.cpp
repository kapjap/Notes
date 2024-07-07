#include "example1.h"
#include "ui_example1.h"
example1::example1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::example1)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

}

example1::~example1()
{
    delete ui;
}

void example1::on_pushButton_clicked()
{
    close();
}

