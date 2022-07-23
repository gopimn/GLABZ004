#include "mytimer.h"
#include <QDebug>
#include<iostream>
using namespace std;
MyTimer::MyTimer()
{
    cout << "construction ma niggas\"!!!";
    QTimer *timer = new QTimer(this);
    connect(timer,  SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
    timer->start(1000);
}

void MyTimer::MyTimerSlot()
{
    cout << "MA MAN!! gopilabz in tha house\"!!!"<<endl;
}


