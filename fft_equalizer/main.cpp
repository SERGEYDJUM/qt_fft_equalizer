#include "mainwindow.h"
#include <equalizer_component.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
//Base=1000Hz ul=20000Hz ll=20Hz m=CB10 i=1 Oct.
//16,15.84893,11.22018,22.38721
//31.5,31.62278,22.38721,44.66836
//63,63.09573,44.66836,89.12509
//125,125.89254,89.12509,177.82794
//250,251.18864,177.82794,354.81339
//500,501.18723,354.81339,707.94578
//1000,1000,707.94578,1412.53754
//2000,1995.26231,1412.53754,2818.38293
//4000,3981.07171,2818.38293,5623.41325
//8000,7943.28235,5623.41325,11220.18454
//16000,15848.93192,11220.18454,22387.21139
