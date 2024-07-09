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

#include "QDebug"


signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{

    ui->setupUi(this);



     connect(ui->lineEdit, &QLineEdit::textChanged, this, &signup::onLineEditTextChanged);
     connect(ui->lineEdit_2, &QLineEdit::editingFinished, this, &signup::on_lineEdit_2_editingFinished);
     connect(ui->lineEdit_5, &QLineEdit::editingFinished, this, &signup::validateCaptcha);
     ui->pushButton->hide();
     ui->lineEdit_4->hide();
     ui->lineEdit_5->setPlaceholderText("enter the  captcha");
     ui->pushButton->setEnabled(false);
     ui->lineEdit_5->hide();
     ui->label_5->hide();
     QSqlDatabase AS;
     AS=QSqlDatabase::addDatabase("QSQLITE");
     AS.setDatabaseName("c:\\faz1-main\\database\\golestan.pro.db");
     AS.open();


}

signup::~signup()
{
    delete ui;
}

void signup::onLineEditTextChanged(const QString &text)
{
    if (text.contains(' '))
    {
        QMessageBox::warning(this, "Warning", "Spaces are not allowed in this field.");

    }
}






void signup::on_pushButton_clicked()
{



    int len1=ui->lineEdit->text().length();
    int len2=ui->lineEdit_2->text().length();
    int len3=ui->lineEdit_3->text().length();
    if(len3==0){
        QMessageBox::warning(this,"","your password is empty.");
    }
    if(len3<=7){
        QMessageBox::warning(this,"","your password should be more than 8 characters.");
    }
    if(len1<=5){
        QMessageBox::warning(this,"","your username should be more than 6 characters.");
    }
    if(len1==0){
        QMessageBox::warning(this,"","your username is empty.");
    }
    if(len2==0){
        QMessageBox::warning(this,"","your gmail is empty.");
    }

    QSqlQuery q;
    QString s1,s2;
    s1=ui->lineEdit->text();
    s2=ui->lineEdit_3->text();

    q.exec("INSERT INTO user(username,password)VALUES('"+s1+"','"+s2+"')");//neveshtan username va password dar database








       if (q.prepare("SELECT * FROM user WHERE username = :s1")) {
          QMessageBox::critical(this, "Error", "username is used befor");
       }

    popup *w5=new popup;
    w5->show();
    this->hide();


}



void signup::on_checkBox_stateChanged(int arg1)
{
    ui->lineEdit_4->show();
    ui->pushButton->show();
    ui->lineEdit_5->show();
    ui->label_5->show();
    if (arg1) {
           QString captcha;
           qsrand(QTime::currentTime().msec());
           for (int i = 0; i < 6; ++i) {
               if (qrand() % 2 == 0) {
                   captcha.append(QChar('A' + qrand() % 26));
               } else {
                   captcha.append(QString::number(qrand() % 10));
               }
           }
           ui->lineEdit_4->setText(captcha);
       } else {
           ui->lineEdit_4->clear();
       }
    ui->checkBox->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);

}


void signup::on_lineEdit_2_editingFinished() {
    QString text = ui->lineEdit_2->text();
    if (!text.contains("@gmail.com")) {
        QMessageBox::critical(this, "Error", "Please enter a valid Gmail address");
        ui->lineEdit_2->setFocus();
    }
}
void signup::validateCaptcha() {
    QString captcha = ui->lineEdit_4->text();
    QString userInput =ui-> lineEdit_5->text();

    if (userInput == captcha) {
       ui-> pushButton->setEnabled(true);
    } else {
        QMessageBox::warning(this, "Incorrect Captcha", "The captcha you entered is incorrect.");
        ui->lineEdit_5->clear();
    }
}

void signup::on_pushButtonlogin_clicked()
{


    login *w4=new login;
    w4->show();
    this->hide();

}


void signup::on_pushButton_2_clicked()
{

}



