#include "kieli.h"
#include "ui_kieli.h"

Kieli::Kieli(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Kieli)
{
    ui->setupUi(this);
}

Kieli::~Kieli()
{
    delete ui;
}
