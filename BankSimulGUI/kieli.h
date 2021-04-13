#ifndef KIELI_H
#define KIELI_H

#include <QMainWindow>

namespace Ui {
class Kieli;
}

class Kieli : public QMainWindow
{
    Q_OBJECT

public:
    explicit Kieli(QWidget *parent = nullptr);
    ~Kieli();

private:
    Ui::Kieli *ui;
};

#endif // KIELI_H
