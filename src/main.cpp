#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("adgellida");
    app.setApplicationName("winsys");

    //language

    QTranslator translator;

    if (QLocale::system().language() == QLocale::Spanish){
        translator.load(":/languages/winsys_es_ES.qm");
        app.installTranslator(&translator);
    }
    //else
    //    translator.load("ubunsys_en_US.qm");

    //app.installTranslator(&translator);

    //language

    MainWindow w;
    w.show();

    return app.exec();
}
