#include <QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(750,700);
    //resize( QSize( 800, 600 ));
    w.show();

    return a.exec();
}
