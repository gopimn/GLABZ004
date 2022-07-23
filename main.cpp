#include <QCoreApplication>
#include "mytimer.h"
#include <QTimer>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Create MyTimer instance
    // QTimer object will be created in the MyTimer constructor
    MyTimer timer;
    cout << "ma man\n\n"<<endl;
    return a.exec();
}
