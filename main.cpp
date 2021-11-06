#include "colormania.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ColorMania w;
    w.show();
    w.setWindowTitle("Color Mania");
    return a.exec();
}
