#ifndef MYNETWORK_H
#define MYNETWORK_H

#include <QMainWindow>

namespace Ui {
class mynetwork;
}

class mynetwork : public QMainWindow
{
    Q_OBJECT

public:
    explicit mynetwork(QWidget *parent = nullptr);
    ~mynetwork();

private slots:
    void on_pushButton2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_serach_button_clicked();

private:
    Ui::mynetwork *ui;
};

#endif // MYNETWORK_H
