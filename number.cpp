#include <QDebug>
#include "number.h"

Number::Number(QObject *parent) :
    QObject(parent), m_value(0)
{

}

void Number::setValue(int i)
{
    if (m_value != i)
    {
        int x = m_value;
        m_value = i;
        emit valueChanged(m_value);
    }
}

void Number::printValue()
{
    qDebug() << "current value=" << m_value << endl;
}

void Number::changeValue(int i)
{
    if (i != 0)
    {
        m_value = m_value + i;
        emit valueChanged(i);
    }
}
