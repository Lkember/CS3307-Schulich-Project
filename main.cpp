/**
* This file implements the main.h
*/
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    return a.exec();
}
