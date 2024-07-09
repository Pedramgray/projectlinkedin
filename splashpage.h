#ifndef SPLASHPAGE_H
#define SPLASHPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class splashpage; }
QT_END_NAMESPACE

class splashpage : public QMainWindow
{
    Q_OBJECT

public:
    splashpage(QWidget *parent = nullptr);
    ~splashpage();

private slots:
    void on_pushButton_clicked();

    void toggleMode(int state);

    void on_checkBox_stateChanged(int arg1);

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::splashpage *ui;
};
#endif // SPLASHPAGE_H
