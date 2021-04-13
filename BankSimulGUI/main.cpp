#include "aloitusruutu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aloitusruutu w;
    w.show();
    return a.exec();
}
