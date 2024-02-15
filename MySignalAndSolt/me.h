#ifndef ME_H
#define ME_H

#include <QObject>

class Me : public QObject
{
    Q_OBJECT
public:
    explicit Me(QObject *parent = nullptr);

    // 槽函数

public slots:
        void eat();

signals:

};

#endif // ME_H
