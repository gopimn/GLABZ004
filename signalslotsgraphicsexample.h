#ifndef SIGNALSLOTSGRAPHICSEXAMPLE_H
#define SIGNALSLOTSGRAPHICSEXAMPLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SignalSlotsGraphicsExample; }
QT_END_NAMESPACE

class SignalSlotsGraphicsExample : public QWidget
{
    Q_OBJECT

public:
    SignalSlotsGraphicsExample(QWidget *parent = nullptr);
    ~SignalSlotsGraphicsExample();

private:
    Ui::SignalSlotsGraphicsExample *ui;
};
#endif // SIGNALSLOTSGRAPHICSEXAMPLE_H
