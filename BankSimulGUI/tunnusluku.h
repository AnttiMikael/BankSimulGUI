#ifndef TUNNUSLUKU_H
#define TUNNUSLUKU_H

#include <QMainWindow>
#include "omatili.h"

namespace Ui {
class Tunnusluku;
}

class Tunnusluku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tunnusluku(QWidget *parent = nullptr);
    ~Tunnusluku();

private slots:

    void on_pushButton_login2_clicked();

private:
    Ui::Tunnusluku *ui;
    OmaTili *omatili;
};

#endif // TUNNUSLUKU_H
