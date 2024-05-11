// main.cpp

#include <QApplication>
#include <QQuickView>
#include <QQmlEngine>

#include "radarscaneffect.hpp"

#include <QtGlobal>

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
 ERROR // syntax error
#endif

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    qmlRegisterType<RadarScanEffect>("RadarScanEffect", 1, 0, "RadarScanEffect");

    QQuickView view;
    view.setSource(QUrl("qrc:/main.qml"));
    app.connect(view.engine(), &QQmlEngine::quit, &QApplication::quit);

    view.show();
    app.exec();

    return 0;
}
