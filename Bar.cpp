#include "Bar.h"
#include <QCoreApplication>
#include <QDebug>
#include <stdio.h>

void Bar (const QString &str){
    setlocale(LC_ALL, "");
    qDebug() << "Bar: " + str;
}
