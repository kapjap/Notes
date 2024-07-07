#ifndef EXAMPLE1_H
#define EXAMPLE1_H
#include <QWidget>
namespace Ui {
class example1;
}

class example1 : public QWidget
{
    Q_OBJECT

public:
    explicit example1(QWidget *parent = nullptr);
    ~example1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::example1 *ui;
};

#endif // EXAMPLE1_H
