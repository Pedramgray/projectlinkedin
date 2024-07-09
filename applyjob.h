#ifndef APPLYJOB_H
#define APPLYJOB_H

#include <QMainWindow>

namespace Ui {
class applyjob;
}

class applyjob : public QMainWindow
{
    Q_OBJECT

public:
    explicit applyjob(QWidget *parent = nullptr);
    ~applyjob();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_serach_button_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::applyjob *ui;
};

#endif // APPLYJOB_H
