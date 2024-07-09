#include "sendpost.h"
#include "ui_sendpost.h"
#include "myprofile.h"
#include "ui_myprofile.h"
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

#include <qdebug.h>
#include <QDir>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QDebug>

#include "QMessageBox"

#include "messaging.h"
#include <QPushButton>
#include "QSqlError"
#include <QFile>
#include "qdebug.h"
sendpost::sendpost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sendpost)
{
    ui->setupUi(this);
}

sendpost::~sendpost()
{
    delete ui;
}

void sendpost::on_serach_button_clicked()
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


void sendpost::on_pushButton_4_clicked()
{
    homepage *hm=new homepage;
    hm->show();
    this->close();
}


void sendpost::on_pushButton_clicked()
{
    mynetwork *mn=new mynetwork;
    mn->show();
    this->close();
}


void sendpost::on_pushButton_2_clicked()
{
    applyjob *apj=new applyjob;
    apj->show();
    this->close();
}


void sendpost::on_pushButton_3_clicked()
{
    messaging *mss=new messaging;
    mss->show();
    this->close();
}


void sendpost::on_pushButton_5_clicked()
{
    myprofile *mpf=new myprofile;
    mpf->show();
    this->close();
}

