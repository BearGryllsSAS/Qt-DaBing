#ifndef ME_H
#define ME_H

#include <QObject>

class Me : public QObject
{
    Q_OBJECT
public:
    explicit Me(QObject *parent = nullptr);

public slots:
    void eat();

    // 添加对应的信号处理函数
    void eat(QString msg);

signals:

};

#endif // ME_H
