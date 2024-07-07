#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    Example1=new example1;
    Example2=new example1;
     Example3=new example1;
     Example4=new example1;
      Example5=new example1;
     QColorConstants::Svg::grey(QColor(gfr));
    ui->lineEdit_2->setText(MyText);
}

Form::~Form()
{
    delete ui;
}
void Form::on_pushButton_clicked()
{
    QString info= ui->lineEdit_2->text();
    if(!info.isEmpty())
    {
        MyText=ui->lineEdit_2->text();
        close();
        Example1->show();
    }
}




void Form::on_pushButton_4_clicked()
{
    QString info= ui->lineEdit->text();
    if(!info.isEmpty())
    {
        MyText=ui->lineEdit->text();
        close();
        Example2->show();
    }
}


void Form::on_pushButton_5_clicked()
{
    QString info= ui->lineEdit_3->text();
    if(!info.isEmpty())
    {
        MyText=ui->lineEdit_3->text();
        close();
        Example3->show();
    }
}


void Form::on_pushButton_3_clicked()
{
    QString info= ui->lineEdit_4->text();
    if(!info.isEmpty())
    {
        MyText=ui->lineEdit_4->text();
        close();
        Example4->show();
    }
}


void Form::on_pushButton_2_clicked()
{
    QString info= ui->lineEdit_5->text();
    if(!info.isEmpty())
    {
        MyText=ui->lineEdit_5->text();
        close();
        Example5->show();
    }
}

