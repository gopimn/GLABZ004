#include "signalslotsgraphicsexample.h"
#include "ui_signalslotsgraphicsexample.h"

SignalSlotsGraphicsExample::SignalSlotsGraphicsExample(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignalSlotsGraphicsExample)
{
    ui->setupUi(this);
}

SignalSlotsGraphicsExample::~SignalSlotsGraphicsExample()
{
    delete ui;
}

