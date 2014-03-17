#include <QCoreApplication>
#include <number.h>

int main(int argc, char *argv[])
{
    Number a, b;
    a.setValue(13);

    QObject::connect(&a, SIGNAL(valueChanged(int)),
                     &a, SLOT(printValue()));
    QObject::connect(&a, &Number::valueChanged,
                     &b, &Number::setValue);
    QObject::connect(&b, SIGNAL(valueChanged(int)),
                     &b, SLOT(printValue()));

    a.setValue(15);

    a.changeValue(-50);
    return 0;
}
