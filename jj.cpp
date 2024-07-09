// p1.cpp
#include "ui_jj
#include "popup.h"
#include "login.h"

class P1 : public QWidget, public Ui::P1 {
    Q_OBJECT

public:
    P1(QWidget* parent = nullptr) : QWidget(parent) {
        setupUi(this);

        /
        connect(checkBox, &QCheckBox::stateChanged, this, &P1::toggleDarkMode);
    }

private slots:
    void toggleDarkMode(int state) {
        QString darkModeStyle = R"(
            background-color: #333333;
            color: #FFFFFF;
        )";

        QString lightModeStyle = R"(
            background-color: #FFFFFF;
            color: #333333;
        )";

        if (state == Qt::Checked) {

            setStyleSheet(darkModeStyle);
            p2->setStyleSheet(darkModeStyle);
            p3->setStyleSheet(darkModeStyle);
        } else {

            setStyleSheet(lightModeStyle);
            p2->setStyleSheet(lightModeStyle);
            p3->setStyleSheet(lightModeStyle);
        }
    }

private:
    P2* p2 = new P2(this);
    P3* p3 = new P3(this);
};
