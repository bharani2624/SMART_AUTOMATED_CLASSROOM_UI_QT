#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog6.h"
#include "dialog8.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;




private slots:
void on_lbtn_clicked();
void on_sbtn_clicked();
void on_pbtn_clicked();
void on_pcbtn_clicked();
void on_fbtn_clicked();
};



#endif // DIALOG_H
