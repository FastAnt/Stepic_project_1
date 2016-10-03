#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <Engine.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQuickView view;


    qmlRegisterType<Engine>("com.FastAnt.Engine", 1, 0, "Engine");
    view.setSource(QUrl("qrc:/main.qml"));
    view.setHeight(720);
    view.setWidth(360);
    view.show();
    return app.exec();
}
