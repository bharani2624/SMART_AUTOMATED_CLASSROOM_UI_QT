#include "dialog8.h"
#include "ui_dialog8.h"

Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);
}

Dialog8::~Dialog8()
{
    delete ui;
}
