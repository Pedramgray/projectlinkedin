#include "applyjob.h"
#include "ui_applyjob.h"
#include "homepage.h"
#include "mynetwork.h"
#include "jobapplyacseptcompany.h"
#include "messaging.h"
#include "myprofile.h"
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

#include "QMessageBox"


#include <QPushButton>
#include "QSqlError"
#include <QFile>
#include "qdebug.h"
applyjob::applyjob(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::applyjob)
{
    ui->setupUi(this);
    ui->comboBox->addItem("person");
    ui->comboBox->addItem("Company");
    ui->comboBox->setCurrentIndex(0);
}

applyjob::~applyjob()
{
    delete ui;
}

void applyjob::on_pushButton_4_clicked()
{
    homepage *p=new homepage;
    p->show();

    this->close();
}


void applyjob::on_pushButton_clicked()
{
    mynetwork *p2=new mynetwork;
    p2->show();

    this->close();
}






void applyjob::on_pushButton_3_clicked()
{
    messaging *p4=new messaging;
    p4->show();
    this->close();
}


void applyjob::on_pushButton_5_clicked()
{
    myprofile *p5=new myprofile;
    p5->show();
    this->close();
}


void applyjob::on_serach_button_clicked()
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


void applyjob::on_comboBox_currentIndexChanged(int index)
{
    if(index==1){
        jobapplyacseptcompany *p6=new jobapplyacseptcompany;
        p6->show();
        this->close();
    }
}

