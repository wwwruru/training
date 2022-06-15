#include "Bar.h"
#include <QDebug>

void Bar (const QString &str){
    setlocale(LC_ALL, "");
    qDebug() << "Bar: " + str;
}
