#include "aa.h"
#include "ui_aa.h"
#include <QPalette>
#include <QApplication>
#include <QStyle>
aa::aa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::aa)
{
    ui->setupUi(this);
     connect(ui->darkModeCheckBox, &QCheckBox::stateChanged, this, &aa::toggleMode);
}

aa::~aa()
{
    delete ui;
}
void aa::toggleMode(int state)
{
    if (state == Qt::Checked) {

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
    } else {

        qApp->setPalette(QApplication::style()->standardPalette());
    }
}
