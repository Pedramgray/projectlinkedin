#include "homepage.h"
#include "ui_homepage.h"
#include "myprofile.h"
#include "ui_myprofile.h"
#include "mynetwork.h"
#include "ui_mynetwork.h"
#include "signup.h"
#include "ui_signup.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QRegExp>
#include "imnotarobot.h"
#include "login.h"
#include "popup.h"
#include <QTime>
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QVBoxLayout>
#include "QSqlError"
#include <QWidget>
#include <QtMultimedia/QMediaPlayer>
#include "QDebug"
#include "userprofile.h"
#include "ui_userprofile.h"
#include <qlabel.h>
#include <QDir>
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QMessageBox"
#include "QSqlQuery"
#include "notification.h"
#include "applyjob.h"
#include "QString"
#include "QSqlDatabase"
#include "QSqlDriver"

#include <qpixmap.h>
#include "QSqlQueryModel"
#include "myprofile.h"
#include "QSqlError"
#include "profile.h"
#include <qpixmap.h>
#include "error.h"
#include <qfile.h>
#include <qfileinfo.h>
#include "signup.h"
#include <qdebug.h>
#include <QDir>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QDebug>
#include "sendpost.h"
#include "QMessageBox"
#include <QPalette>
#include <QApplication>
#include <QStyle>
#include "messaging.h"
#include <QPushButton>
#include "QSqlError"
#include <QFile>
#include "qdebug.h"

homepage::homepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homepage)
{

    ui->setupUi(this);

    QSqlDatabase AS;
    AS=QSqlDatabase::addDatabase("QSQLITE");
    AS.setDatabaseName("c:\\faz1-main\\database\\golestan.pro.db");
    AS.open();

}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_pushButton_5_clicked()
{
    myprofile* t = new myprofile;
    t->show();
    this->close();
}





void homepage::on_pushButton_clicked()
{
    mynetwork* t = new mynetwork;
    t->show();
    this->close();
}



void homepage::on_serach_button_clicked()
{

    QString search = ui->search->text();
    QString s;
    QSqlQuery q;

    q.exec("SELECT ID FROM USER WHERE username='"+search+"'");
    if(q.first())
    {
        s = q.value(0).toString();
       // get_the_ID(s);
       userprofile* page = new userprofile;
        page->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this,"Search name ","The name is not exsist in the database " , "ok");
        ui->search->setText("");
    }
}


void homepage::on_pushButton_2_clicked()
{
    applyjob *a=new applyjob;
    a->show();
    this->close();

}


void homepage::on_pushButton_3_clicked()
{
    messaging *m=new messaging;
    m->show();
    this->close();

}


void homepage::on_pushButton_7_clicked()
{
    notification *n=new notification;
    n->show();
    this->close();

}


void homepage::on_pushButton_8_clicked()
{
    signup *s=new signup;
    s->show();
    this->close();

}


void homepage::on_pushButton_6_clicked()
{
    sendpost *sen=new sendpost;
    sen->show();
    this->close();

}



