#ifndef AA_H
#define AA_H

#include <QMainWindow>

namespace Ui {
class aa;
}

class aa : public QMainWindow
{
    Q_OBJECT

public:
    explicit aa(QWidget *parent = nullptr);
    ~aa();
private slots:
    void toggleMode(int state);

private:
    Ui::aa *ui;
};

#endif // AA_H
