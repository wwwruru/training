#include "Baz.h"
#include <QCoreApplication>
#include <QDebug>
#include <stdio.h>

void Baz (QString &str){
    setlocale(LC_ALL, "");
    qDebug() << "Baz: " + str;
}
