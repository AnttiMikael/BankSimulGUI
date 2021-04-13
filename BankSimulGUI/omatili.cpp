#include "omatili.h"
#include "ui_omatili.h"

OmaTili::OmaTili(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OmaTili)
{
    ui->setupUi(this);
}

OmaTili::~OmaTili()
{
    delete ui;
}

