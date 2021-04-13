#ifndef OMATILI_H
#define OMATILI_H

#include <QMainWindow>

namespace Ui {
class OmaTili;
}

class OmaTili : public QMainWindow
{
    Q_OBJECT

public:
    explicit OmaTili(QWidget *parent = nullptr);
    ~OmaTili();

private slots:


private:
    Ui::OmaTili *ui;
};

#endif // OMATILI_H
