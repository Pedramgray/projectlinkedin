#ifndef MAKEJOB_H
#define MAKEJOB_H

#include <QMainWindow>

namespace Ui {
class makejob;
}

class makejob : public QMainWindow
{
    Q_OBJECT

public:
    explicit makejob(QWidget *parent = nullptr);
    ~makejob();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::makejob *ui;
};

#endif // MAKEJOB_H
