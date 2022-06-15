#include "Baz.h"
#include <QDebug>

void Baz (QString &str){
    setlocale(LC_ALL, "");
    qDebug() << "Baz: " + str;
}
