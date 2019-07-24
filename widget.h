#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int changeMoney(int n);

    int money{0};


    int temp_10=0;
    int temp_50=0;
    int temp_100=0;
    int temp_500=0;

    int return_money=0;
    int temp_money=0;




private slots:
    void on_pb10_clicked();

    void on_greentea200_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_coffee100_clicked();

    void on_tea300_clicked();

    void on_returnCoin_clicked();




private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
