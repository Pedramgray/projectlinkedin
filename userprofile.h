#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QMainWindow>

namespace Ui {
class userprofile;
}

class userprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit userprofile(QWidget *parent = nullptr);
    ~userprofile();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::userprofile *ui;
};

#endif // USERPROFILE_H
