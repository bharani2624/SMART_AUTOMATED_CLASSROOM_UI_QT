#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = nullptr);
    ~Dialog1();

private slots:
    void on_checkBox_3_toggled(bool checked);

    void on_cb2_toggled(bool checked);

    void on_cb3_toggled(bool checked);

    void on_cb4_toggled(bool checked);

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
