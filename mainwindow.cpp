#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form=new Form;
    form->show();
    form->setEnabled(false);
     setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username= ui->lineEdit->text();
     QString password= ui->lineEdit_2->text();
    if(username=="kapjap" && password=="t101201a")
     {
         form->setEnabled(true);
         close();
    }
}


