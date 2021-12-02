#include "colormania.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ColorMania w;
    w.setWindowTitle("Color Mania");
    w.setWindowIcon(QIcon(":/all/icon.png"));
    w.show();
    return a.exec();
}
