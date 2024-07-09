#include "mynetwork.h"
#include "ui_mynetwork.h"
#include "mynetwork.h"
#include "ui_mynetwork.h"
#include "QSqlQuery"
#include "QDir"
#include "QMessageBox"
#include "QIcon"
#include "messaging.h"
#include "ui_messaging.h"
#include "makejob.h"
#include "ui_makejob.h"
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
mynetwork::mynetwork(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mynetwork)
{
    ui->setupUi(this);
}

mynetwork::~mynetwork()
{
    delete ui;
}
int count1=0;
int count2=0;
int count3=0;
int count4=0;

void mynetwork::on_pushButton_clicked()
{

  count1++;
  if(count1%2!=0)
  {
    ui->pushButton->setText("unfollow");
  }
  else
  {
      ui->pushButton->setText("follow");
  }
}

void mynetwork::on_pushButton2_clicked()
{
    count2++;
    if(count2%2!=0)
    {
      ui->pushButton2->setText("unfollow");
    }
    else
    {
        ui->pushButton2->setText("follow");
    }
}
void mynetwork::on_pushButton3_clicked()
{
    count3++;
    if(count3%2!=0)
    {
      ui->pushButton3->setText("unfollow");
    }
    else
    {
        ui->pushButton3->setText("follow");
    }
}
void mynetwork::on_pushButton4_clicked()
{
    count4++;
    if(count4%2!=0)
    {
      ui->pushButton4->setText("unfollow");
    }
    else
    {
        ui->pushButton4->setText("follow");
    }
}

void mynetwork::on_pushButton_3_clicked()
{
    ui->groupBox->hide();
    ui->label_3->hide();
    ui->groupBox_9->show();
    ui->pushButton_3->hide();
}


void mynetwork::on_pushButton_9_clicked()
{
    ui->groupBox->show();
    ui->label_3->show();
    ui->groupBox_9->hide();
    ui->pushButton_3->show();
}

void mynetwork::on_pushButton_8_clicked()
{

}


void mynetwork::on_pushButton_4_clicked()
{

}


void mynetwork::on_pushButton_7_clicked()
{


}


void mynetwork::on_pushButton_11_clicked()
{
    homepage *hm=new homepage;
    hm->show();
    this->close();
}







void mynetwork::on_pushButton_10_clicked()
{
    applyjob *apj=new applyjob;
    apj->show();
    this->close();
}


void mynetwork::on_pushButton_14_clicked()
{
    messaging *mss=new messaging;
    mss->show();
    this->close();
}


void mynetwork::on_pushButton_13_clicked()
{
    myprofile *mpf=new myprofile;
    mpf->show();
    this->close();
}


void mynetwork::on_serach_button_clicked()
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



