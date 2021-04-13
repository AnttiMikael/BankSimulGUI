#include "aloitusruutu.h"
#include "ui_aloitusruutu.h"

aloitusruutu::aloitusruutu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::aloitusruutu)
{
    ui->setupUi(this);
}

aloitusruutu::~aloitusruutu()
{
    delete ui;
}




void aloitusruutu::on_pushButton_login_clicked()
{
    hide();
    tunnusluku = new Tunnusluku(this);
    tunnusluku->show();
}




void aloitusruutu::on_pushButton_kieli_clicked()
{
    kieli = new Kieli(this);
    kieli->show();
}
