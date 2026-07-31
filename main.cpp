#include "mainwindow.h"

#include <QApplication>
#include <QSettings>
#include <QTextCodec>

QSettings settings;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationName("MTC");
    QApplication::setApplicationName("Random");

    // 启用高 DPI 缩放
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);

    MainWindow w;
    w.show();
    return a.exec();
}
