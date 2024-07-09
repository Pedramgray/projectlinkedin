#ifndef THEME_H
#define THEME_H

#include <QMainWindow>

namespace Ui {
class theme;
}

class theme : public QMainWindow
{
    Q_OBJECT

public:
    explicit theme(QWidget *parent = nullptr);
    ~theme();

private slots:
    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::theme *ui;
};

#endif // THEME_H
