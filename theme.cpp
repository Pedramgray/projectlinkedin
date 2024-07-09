#include "theme.h"
#include "ui_theme.h"
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
theme::theme(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::theme)
{
    ui->setupUi(this);
    ui->comboBox_3->addItem("light mode");
            ui->comboBox_3->addItem("dark mode");
            ui->comboBox_3->addItem("gray mode");
            ui->comboBox_3->addItem("night mode");

            ui->comboBox_3->setCurrentIndex(0);
}

theme::~theme()
{
    delete ui;
}

void theme::on_comboBox_3_currentIndexChanged(int index)
{
    if(index==1){
        QPalette darkPalette;
        darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::WindowText, Qt::white);
        darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
        darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
        darkPalette.setColor(QPalette::ToolTipText, Qt::white);
        darkPalette.setColor(QPalette::Text, Qt::white);
        darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ButtonText, Qt::white);
        darkPalette.setColor(QPalette::BrightText, Qt::red);
        darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::HighlightedText, Qt::white);
    qApp->setPalette(darkPalette);
this->close();
    }
    if(index==0){
        qApp->setPalette(QApplication::style()->standardPalette());
this->close();
    }
    if(index==2){
        QPalette grayscalePalette;
        grayscalePalette.setColor(QPalette::Window, QColor(64, 64, 64));
        grayscalePalette.setColor(QPalette::WindowText, QColor(192, 192, 192));
        grayscalePalette.setColor(QPalette::Base, QColor(32, 32, 32));
        grayscalePalette.setColor(QPalette::AlternateBase, QColor(64, 64, 64));
        grayscalePalette.setColor(QPalette::ToolTipBase, QColor(192, 192, 192));
        grayscalePalette.setColor(QPalette::ToolTipText, QColor(192, 192, 192));
        grayscalePalette.setColor(QPalette::Text, QColor(192, 192, 192));
        grayscalePalette.setColor(QPalette::Button, QColor(64, 64, 64));
        grayscalePalette.setColor(QPalette::ButtonText, QColor(192, 192, 192));
        grayscalePalette.setColor(QPalette::BrightText, QColor(255, 255, 255));
        grayscalePalette.setColor(QPalette::Link, QColor(128, 128, 128));
        grayscalePalette.setColor(QPalette::Highlight, QColor(128, 128, 128));
        grayscalePalette.setColor(QPalette::HighlightedText, QColor(192, 192, 192));
        qApp->setPalette(grayscalePalette);
this->close();
    }
    if(index==3){
        QPalette nightModePalette;
        nightModePalette.setColor(QPalette::Window, QColor(32, 32, 48));
        nightModePalette.setColor(QPalette::WindowText, QColor(192, 192, 224));
        nightModePalette.setColor(QPalette::Base, QColor(16, 16, 32));
        nightModePalette.setColor(QPalette::AlternateBase, QColor(32, 32, 48));
        nightModePalette.setColor(QPalette::ToolTipBase, QColor(192, 192, 224));
        nightModePalette.setColor(QPalette::ToolTipText, QColor(192, 192, 224));
        nightModePalette.setColor(QPalette::Text, QColor(192, 192, 224));
        nightModePalette.setColor(QPalette::Button, QColor(32, 32, 48));
        nightModePalette.setColor(QPalette::ButtonText, QColor(192, 192, 224));
        nightModePalette.setColor(QPalette::BrightText, QColor(255, 255, 255));
        nightModePalette.setColor(QPalette::Link, QColor(128, 128, 192));
        nightModePalette.setColor(QPalette::Highlight, QColor(128, 128, 192));
        nightModePalette.setColor(QPalette::HighlightedText, QColor(192, 192, 224));
        qApp->setPalette(nightModePalette);
        this->close();

    }

}

