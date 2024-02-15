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

};

#endif // GRILFRIEND_H
