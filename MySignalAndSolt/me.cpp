#include "me.h"
#include <QDebug>

Me::Me(QObject *parent) : QObject(parent)
{

}

void Me::eat()
{
    qDebug() << "带你去吃麻辣烫" << endl;
}
