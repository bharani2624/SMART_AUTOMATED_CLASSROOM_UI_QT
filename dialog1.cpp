#include "dialog1.h"
#include "ui_dialog1.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_checkBox_3_toggled(bool checked)
{
    if(checked==1){
        ui->label_2->setStyleSheet("border-image: url(:/images/bulb_off.jpg);");
    }
    if(checked==0){
        ui->label_2->setStyleSheet("border-image: url(:/images/bulb_on.jpg);");
    }
}






void Dialog1::on_cb2_toggled(bool checked)
{
    if(checked==1){
        ui->label_3->setStyleSheet("border-image: url(:/images/bulb_off.jpg);");
    }
    if(checked==0){
        ui->label_3->setStyleSheet("border-image: url(:/images/bulb_on.jpg);");
    }
}


void Dialog1::on_cb3_toggled(bool checked)
{

    if(checked==1){
        ui->label_4->setStyleSheet("border-image: url(:/images/bulb_off.jpg);");
    }
    if(checked==0){
        ui->label_4->setStyleSheet("border-image: url(:/images/bulb_on.jpg);");
    }

}



void Dialog1::on_cb4_toggled(bool checked)
{


    if(checked==1){
        ui->label_9->setStyleSheet("border-image: url(:/images/bulb_off.jpg);");;

    }

}

