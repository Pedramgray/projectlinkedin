#ifndef MYPROFILE_H
#define MYPROFILE_H

#include <QMainWindow>

namespace Ui {
class myprofile;
}

class myprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit myprofile(QWidget *parent = nullptr);
    ~myprofile();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_Edit_profile_button_clicked();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_lineEdit_3_editingFinished();

private:
    Ui::myprofile *ui;
};

#endif // MYPROFILE_H
