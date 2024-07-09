#include "jobapplyacseptcompany.h"
#include "ui_jobapplyacseptcompany.h"
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
#include "messaging.h"
#include "QMessageBox"
#include "makejob.h"
#include "myprofile.h"
#include <QPushButton>
#include "QSqlError"
#include <QFile>
#include "qdebug.h"
jobapplyacseptcompany::jobapplyacseptcompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jobapplyacseptcompany)
{
    ui->setupUi(this);
    ui->mod->addItem("person");
    ui->mod->addItem("company");
    ui->mod->setCurrentIndex(1);
}

jobapplyacseptcompany::~jobapplyacseptcompany()
{
    delete ui;
}

void jobapplyacseptcompany::on_serach_button_clicked()
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


void jobapplyacseptcompany::on_pushButton_4_clicked()
{
    homepage *q=new homepage;
    q->show();
    this->close();
}


void jobapplyacseptcompany::on_pushButton_clicked()
{
    mynetwork *q2=new mynetwork;
    q2-> show();
    this->close();
}





void jobapplyacseptcompany::on_pushButton_3_clicked()
{
   messaging *q3=new messaging;
   q3->show();
   this->close();
}


void jobapplyacseptcompany::on_mod_currentIndexChanged(int index)
{
    if(index==1){
        applyjob *q4=new applyjob;
        q4->show();
        this->close();
    }
}


void jobapplyacseptcompany::on_pushButton_5_clicked()
{
    myprofile *q5=new myprofile;
    q5->show();
    this->hide();
}


void jobapplyacseptcompany::on_pushButton_6_clicked()
{
    makejob *q6=new makejob;
    q6->show();
    this->close();
}

