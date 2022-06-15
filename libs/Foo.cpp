#include "Foo.h"
#include <QDebug>

void Foo (QString str){
    setlocale(LC_ALL, "");
    qDebug() << "foo: " + str;
}
