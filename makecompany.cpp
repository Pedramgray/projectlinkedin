#include "makecompany.h"
#include "ui_makecompany.h"
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
#include"applyjob.h"

#include "QString"
#include "QSqlDatabase"
#include "QSqlDriver"

#include <qpixmap.h>
#include "QSqlQueryModel"
#
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
#include "myprofile.h"
#include "QMessageBox"

#include "messaging.h"
#include <QPushButton>
#include "QSqlError"
#include <QFile>
#include "qdebug.h"
makecompany::makecompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::makecompany)
{
    ui->setupUi(this);
}

makecompany::~makecompany()
{
    delete ui;
}

void makecompany::on_serach_button_clicked()
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


void makecompany::on_pushButton_4_clicked()
{
    homepage *hmp=new homepage;
    hmp->show();
    this->close();
}


void makecompany::on_pushButton_clicked()
{
    mynetwork *m=new mynetwork;
    m->show();
    this->close();
}


void makecompany::on_pushButton_2_clicked()
{
    applyjob *app= new applyjob;
    app->show();
    this->close();
}


void makecompany::on_pushButton_3_clicked()
{
    messaging *mess=new messaging;
    mess->show();
    this->close();
}


void makecompany::on_pushButton_5_clicked()
{
    myprofile *mp=new myprofile;
    mp->show();
    this->close();

}

