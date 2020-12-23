#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //printf("test");
    //w.setWindowTitle("Interesting GoBang of Shanghaitech");
    w.show();

    return a.exec();
}
