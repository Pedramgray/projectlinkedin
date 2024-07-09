#ifndef SENDPOST_H
#define SENDPOST_H

#include <QMainWindow>

namespace Ui {
class sendpost;
}

class sendpost : public QMainWindow
{
    Q_OBJECT

public:
    explicit sendpost(QWidget *parent = nullptr);
    ~sendpost();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::sendpost *ui;
};

#endif // SENDPOST_H
