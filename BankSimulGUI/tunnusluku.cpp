#include "tunnusluku.h"
#include "ui_tunnusluku.h"
#include <QMessageBox>
Tunnusluku::Tunnusluku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tunnusluku)
{
    ui->setupUi(this);
}

Tunnusluku::~Tunnusluku()
{
    delete ui;
}


void Tunnusluku::on_pushButton_login2_clicked()
{
    QString tunnusluku = ui->lineEdit_ID->text();

    if(tunnusluku == "1234") {
        hide();
        omatili = new OmaTili(this);
        omatili->show();
    }
    else {
        QMessageBox::warning(this, "Virhe", "Tunnuslukusi on väärä");
    }
}
