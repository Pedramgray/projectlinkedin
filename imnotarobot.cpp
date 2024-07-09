#include "imnotarobot.h"
#include "ui_imnotarobot.h"
#include "popup.h"
#include <QFile>
#include <QDataStream>
#include <QComboBox>
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "homepage.h"
imnotarobot::imnotarobot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::imnotarobot)

{
    ui->setupUi(this);

    ui->comboBox_2->addItem("Jan");
    ui->comboBox_2->addItem("Feb");
    ui->comboBox_2->addItem("March");
    ui->comboBox_2->addItem("April");
    ui->comboBox_2->addItem("May");
    ui->comboBox_2->addItem("June");
    ui->comboBox_2->addItem("July");
    ui->comboBox_2->addItem("Aug");
    ui->comboBox_2->addItem("Sep");
    ui->comboBox_2->addItem("Oct");
    ui->comboBox_2->addItem("Nov");
    ui->comboBox_2->addItem("Dec");
    for (int year = 1970; year <= 2024; ++year) {
        ui->comboBox->addItem(QString::number(year));
    }
    for (int day = 1; day<=31;++day){
        ui->comboBox_3->addItem(QString::number(day));
    }
}

imnotarobot::~imnotarobot()
{
    delete ui;
}

void imnotarobot::on_pushButton_clicked()
{
    QSqlQuery q;
    QString s1,s2;
    s1=ui->lineEdit_2->text();
    s2=ui->lineEdit->text();

    q.exec("INSERT INTO user(company,job)VALUES('"+s1+"','"+s2+"')");//neveshtan username va password dar database
    close();

    homepage *o=new homepage;
    o->show();
    this->close();

}

