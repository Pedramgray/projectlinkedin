#ifndef MESSAGING_H
#define MESSAGING_H

#include <QMainWindow>

namespace Ui {
class messaging;
}

class messaging : public QMainWindow
{
    Q_OBJECT

public:
    explicit messaging(QWidget *parent = nullptr);
    ~messaging();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::messaging *ui;
};

#endif // MESSAGING_H
