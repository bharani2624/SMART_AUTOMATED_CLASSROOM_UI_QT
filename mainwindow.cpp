#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->username1->setPlaceholderText("Enter Your Name");
    ui->password1->setPlaceholderText("Enter Your Password");
    ui->email1->setPlaceholderText("Enter Your Email");
    ui->phone1->setPlaceholderText("Enter Your Phone Number");
    ui->usernamelogin->setPlaceholderText("Enter Your UserName");
    ui->passwordlogin->setPlaceholderText("Enter Password");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerbtn_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    /*database.setHostName("localname");
    database.setUserName("root");
    database.setPassword("");*/
    database.setDatabaseName("D:/db/qtregister.sqlite");

    if(database.open()) {

        //Retrieve data from input fields

        QMessageBox::information(this, "Connected", "Connection successfull");

        QString username = ui->username1->text();
        QString password = ui->password1->text();
        QString email = ui->email1->text();
        QString phone = ui->phone1->text();

        //Run our insert query

        QSqlQuery qry;
        qry.prepare("INSERT INTO users (username, password, email, phone)"
                    "VALUES (:username, :password, :email, :phone)");
        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        qry.bindValue(":email", email);
        qry.bindValue(":phone", phone);


        if(qry.exec()) {
            QMessageBox::information(this, "Inserted", "Data and inserted successfully");
        } else {
            QMessageBox::information(this, "Not Inserted", "Data not inserted");
        }


    } else {
        QMessageBox::information(this, "Not Connected", "Database Is Not Connected");
    }

}


void MainWindow::on_loginbtn_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE", "MyConnect");
    /*db.setHostName("localname");
    db.setUserName("root");
    db.setPassword("");*/
    db.setDatabaseName("D:/db/qtregister.sqlite");

    QString username = ui->usernamelogin->text();
    QString password = ui->passwordlogin->text();

    if(db.open()) {

        //Creating my qqueries
        //QMessageBox::information(this, "Database Success", "Database Connection Success");

        QSqlQuery query(QSqlDatabase::database("MyConnect"));

        query.prepare(QString("SELECT * FROM users WHERE username = :username AND password = :password"));

        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if(!query.exec()) {

            QMessageBox::information(this, "Failed", "Query failed to execute");

        } else {

            QMessageBox::information(this, "Executed", "Query executed");

            query.next();

            QString usernameFromDB = query.value(1).toString();
            QString passwordFromDB = query.value(2).toString();

            if(usernameFromDB == username && passwordFromDB == password) {

                       QMessageBox::information(this, "Success", "Login Success");
                        Dialog dialog1;
                        dialog1.setModal(true);
                        dialog1.exec();
            }


             else {

                QMessageBox::information(this, "Failed", "Login Failed");

            }

        }

    } else {

        QMessageBox::information(this, "Database Failed", "Database Connection Failed");

    }


}

