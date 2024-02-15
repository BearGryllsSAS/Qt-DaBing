#ifndef GRILFRIEND_H
#define GRILFRIEND_H

#include <QObject>

class GrilFriend : public QObject
{
    Q_OBJECT
public:
    explicit GrilFriend(QObject *parent = nullptr);

signals:
    void hungry();

    // 将 hungry 信号进行重载
    void hungry(QString msg);

};

#endif // GRILFRIEND_H
