#include "Foo.h"
#include <QCoreApplication>
#include <QDebug>
#include <stdio.h>

void Foo (QString str){
    setlocale(LC_ALL, "");
    qDebug() << "foo: " + str;
}
