#include "splashpage.h"
#include "ui_splashpage.h"
#include "signup.h"
#include "aa.h"
#include <QPalette>
#include <QApplication>
#include <QStyle>
#include <QIcon>
#include <QPushButton>
#include <QPixmap>

splashpage::splashpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::splashpage)
{
    ui->setupUi(this);
   // QIcon myicon("");
    //ui->pushButton->setIcon(myicon);
    //ui->myPushButton->setIcon(QIcon(QPixmap(":/path/to/your/image.png").scaled(32, 32, Qt::KeepAspectRatio)))[index]
   // ui->pushButton->setIcon(QIcon(QPixmap().scaled(32,32,Qt::KeepAspectRatio)))[index];
    // QPixmap image(":/new/prefix1/ssss.png");
   //  QPixmap scaledImage = image.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    // ui->pushButton->setIcon(QIcon(scaledImage));
         //ui->pushButton->setIconSize(QSize(100, 100));
}

splashpage::~splashpage()
{
    delete ui;
}


void splashpage::on_pushButton_clicked()
{
    signup *w2=new signup;
    w2->show();


    this->hide();
}


//void splashpage::on_checkBox_stateChanged(int state)
//{
   // if(state == Qt::Checked){
   // ui->checkBox->setText("light mode");
    //QPalette darkPalette;
  //  darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
   // darkPalette.setColor(QPalette::WindowText, Qt::white);
   // darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
   // darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
  //  darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
   // darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    //darkPalette.setColor(QPalette::Text, Qt::white);
    //darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    //darkPalette.setColor(QPalette::ButtonText, Qt::white);
   // darkPalette.setColor(QPalette::BrightText, Qt::red);
   // darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
   // darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
   // darkPalette.setColor(QPalette::HighlightedText, Qt::white);
//qApp->setPalette(darkPalette);  }
//else {

     //   qApp->setPalette(QApplication::style()->standardPalette());
       //  ui->checkBox->setText("dark mode");
   // }


//}




