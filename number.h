#ifndef NUMBER_H
#define NUMBER_H

#include <QObject>

class Number : public QObject
{
    Q_OBJECT
    int m_value;
public:
    explicit Number(QObject *parent = 0);

signals:
    void valueChanged(int _old);
public slots:
    void setValue(int i);
    void printValue();
    void changeValue(int i);
};

#endif // NUMBER_H
