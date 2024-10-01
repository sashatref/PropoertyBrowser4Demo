#include <QApplication>
#include <QStyle>
#include <QStyleFactory>
#include <QtPlugin>

#include "MainWindow.h"

Q_IMPORT_PLUGIN(CustomStylePlugin)

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(CustomStylePlugin);

    a.setStyle("customStyle");

    MainWindow w;
    w.show();

    return a.exec();
}



