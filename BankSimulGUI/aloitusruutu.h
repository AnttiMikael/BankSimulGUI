#ifndef ALOITUSRUUTU_H
#define ALOITUSRUUTU_H

#include <QMainWindow>
#include "tunnusluku.h"
#include "kieli.h"

QT_BEGIN_NAMESPACE
namespace Ui { class aloitusruutu; }
QT_END_NAMESPACE

class aloitusruutu : public QMainWindow
{
    Q_OBJECT

public:
    aloitusruutu(QWidget *parent = nullptr);
    ~aloitusruutu();

private slots:

    void on_pushButton_login_clicked();

    void on_pushButton_kieli_clicked();

private:
    Ui::aloitusruutu *ui;
    Tunnusluku *tunnusluku;
    Kieli *kieli;
};
#endif // ALOITUSRUUTU_H
