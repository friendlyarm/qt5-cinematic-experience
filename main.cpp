#include <QGuiApplication>
#include <QQuickView>
#include <QObject>
#include <QQmlEngine>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc,argv);
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl::fromLocalFile(QCoreApplication::applicationDirPath() + QLatin1String("/Qt5_CinematicExperience.qml")));
    QQmlEngine* engine = view.engine();
    QObject::connect(engine, SIGNAL(quit()), &app, SLOT(quit()));
    view.showFullScreen();
    return app.exec();
}
