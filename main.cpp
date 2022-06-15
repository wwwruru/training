#include <QTextStream>
#include "Foo.h"
#include "Bar.h"
#include "Baz.h"

QTextStream cout(stdout);
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QString str;
    cout << "Enter the text : ";
    cout.flush();
    str = cin.readLine();

    Foo(str);
    Baz(str);
    Bar(str);

    cout << Version;
    cout.flush();
    return 0;
}
