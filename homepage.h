#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

namespace Ui {
class homepage;
}

class homepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = nullptr);
    ~homepage();
bool isWhite();
bool isblack();
bool isblue();
private slots:
    void on_pushButton_5_clicked();

    void updateN();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_serach_button_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
