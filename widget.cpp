#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    if(money<100)
    {
        ui->coffee100->setDisabled(true);
    }
    else
    {
     ui->coffee100->setDisabled(false);
    }

    if(money<200)
    {
        ui->greentea200->setDisabled(true);

    }
    else
       {
        ui->greentea200->setDisabled(false);

    }


    if(money<300)
    {
        ui->tea300->setDisabled(true);
    }
    else
       {
        ui->tea300->setDisabled(false);

    }
}

Widget::~Widget()
{
    delete ui;
}

int Widget::changeMoney(int n)
{
    money +=n;
    ui->lcdNumber->display(QString::number(money));
    //ui->coffee100->setEnabled(false);
    //push button disable

    return money;

}


void Widget::on_pb10_clicked()
{

    changeMoney(10);
    if(money<100)
    {
        ui->coffee100->setDisabled(true);
    }
    else
    {
     ui->coffee100->setDisabled(false);
    }

    if(money<200)
    {
        ui->greentea200->setDisabled(true);

    }
    else
       {
        ui->greentea200->setDisabled(false);

    }


    if(money<300)
    {
        ui->tea300->setDisabled(true);
    }
    else
       {
        ui->tea300->setDisabled(false);

    }
}



void Widget::on_pb50_clicked()
{


    changeMoney(50);
    if(money<100)
    {
        ui->coffee100->setDisabled(true);
    }
    else
    {
     ui->coffee100->setDisabled(false);
    }

    if(money<200)
    {
        ui->greentea200->setDisabled(true);

    }
    else
       {
        ui->greentea200->setDisabled(false);

    }


    if(money<300)
    {
        ui->tea300->setDisabled(true);
    }
    else
       {
        ui->tea300->setDisabled(false);

    }


}

void Widget::on_pb100_clicked()
{

    changeMoney(100);
    if(money<100)
    {
        ui->coffee100->setDisabled(true);
    }
    else
    {
     ui->coffee100->setDisabled(false);
    }

    if(money<200)
    {
        ui->greentea200->setDisabled(true);

    }
    else
       {
        ui->greentea200->setDisabled(false);

    }


    if(money<300)
    {
        ui->tea300->setDisabled(true);
    }
    else
       {
        ui->tea300->setDisabled(false);

    }
}

void Widget::on_pb500_clicked()
{

    changeMoney(500);
    if(money<100)
    {
        ui->coffee100->setDisabled(true);
    }
    else
    {
     ui->coffee100->setDisabled(false);
    }

    if(money<200)
    {
        ui->greentea200->setDisabled(true);

    }
    else
       {
        ui->greentea200->setDisabled(false);

    }


    if(money<300)
    {
        ui->tea300->setDisabled(true);
    }
    else
       {
        ui->tea300->setDisabled(false);

    }
}

void Widget::on_coffee100_clicked()
{

       changeMoney(-100);
       if(money<100)
       {
           ui->coffee100->setDisabled(true);
       }
       else
       {
        ui->coffee100->setDisabled(false);
       }

       if(money<200)
       {
           ui->greentea200->setDisabled(true);

       }
       else
          {
           ui->greentea200->setDisabled(false);

       }


       if(money<300)
       {
           ui->tea300->setDisabled(true);
       }
       else
          {
           ui->tea300->setDisabled(false);

       }

}

void Widget::on_greentea200_clicked()
{

            changeMoney(-200);

            if(money<100)
            {
                ui->coffee100->setDisabled(true);
            }
            else
            {
             ui->coffee100->setDisabled(false);
            }

            if(money<200)
            {
                ui->greentea200->setDisabled(true);

            }
            else
               {
                ui->greentea200->setDisabled(false);

            }


            if(money<300)
            {
                ui->tea300->setDisabled(true);
            }
            else
               {
                ui->tea300->setDisabled(false);

            }

}

void Widget::on_tea300_clicked()
{



            changeMoney(-300);
            if(money<100)
            {
                ui->coffee100->setDisabled(true);
            }
            else
            {
             ui->coffee100->setDisabled(false);
            }

            if(money<200)
            {
                ui->greentea200->setDisabled(true);

            }
            else
               {
                ui->greentea200->setDisabled(false);

            }


            if(money<300)
            {
                ui->tea300->setDisabled(true);
            }
            else
               {
                ui->tea300->setDisabled(false);

            }


}

void Widget::on_returnCoin_clicked()
{
    QMessageBox msg;

     temp_10=0;
     temp_50=0;
     temp_100=0;
     temp_500=0;

     return_money=changeMoney(0);
     temp_money= changeMoney(0);

     changeMoney(-temp_money);

    if(return_money>=500)
    {
        temp_500+=(return_money/500);
        return_money= return_money%500;
    }
    if(return_money>=100)
    {
        temp_100+=(return_money/100);
        return_money= return_money%100;
    }
    if(return_money>=50)
    {
        temp_50+=(return_money/50);
        return_money= return_money%50;
        temp_10=return_money;

    }

    if(return_money<50)
    {

        temp_10=return_money;

    }


    //changeMoney(-temp_money);




    msg.information(nullptr,"return_cash",
                    "500 won: " + QString::number(temp_500*500) +"\n" +
                    "100won: " + QString::number(temp_100*100) + "\n" +
                    "50won: " + QString::number(temp_50*50) + "\n"
                    "10won: " + QString::number(temp_10));


}





