#ifndef JOBAPPLYACSEPTCOMPANY_H
#define JOBAPPLYACSEPTCOMPANY_H

#include <QMainWindow>

namespace Ui {
class jobapplyacseptcompany;
}

class jobapplyacseptcompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit jobapplyacseptcompany(QWidget *parent = nullptr);
    ~jobapplyacseptcompany();

private slots:
    void on_serach_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_mod_currentIndexChanged(int index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::jobapplyacseptcompany *ui;
};

#endif // JOBAPPLYACSEPTCOMPANY_H
