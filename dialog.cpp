#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_lbtn_clicked()
{
    Dialog1 dialog1;
    dialog1.setModal(true);
    dialog1.exec();

}

void Dialog::on_sbtn_clicked()
{
    Dialog6 dialog6;
    dialog6.setModal(true);
    dialog6.exec();
}
void Dialog::on_pbtn_clicked()
{
    Dialog2 dialog2;
    dialog2.setModal(true);
    dialog2.exec();

}
void Dialog::on_pcbtn_clicked()
{
    Dialog8 dialog8;
    dialog8.setModal(true);
    dialog8.exec();

}



void Dialog::on_fbtn_clicked()
{
    Dialog3 dialog3;
    dialog3.setModal(true);
    dialog3.exec();
}

