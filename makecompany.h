#ifndef MAKECOMPANY_H
#define MAKECOMPANY_H

#include <QMainWindow>

namespace Ui {
class makecompany;
}

class makecompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit makecompany(QWidget *parent = nullptr);
    ~makecompany();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::makecompany *ui;
};

#endif // MAKECOMPANY_H
