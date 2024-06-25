#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w(2, 2);

    w.setItem(0, 0, "Jhon");
    w.setItem(0, 1, "18");
    w.setItem(1, 0, "Emelly");
    w.setItem(1, 1, "19");

    w.show();
    return a.exec();
}
