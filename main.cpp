#include "mychat.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mychat w;
    w.show();
    return a.exec();
}
