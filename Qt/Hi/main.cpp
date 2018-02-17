#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hi David";

    QString mStr = "hi wold";


    qDebug() << mStr;

    return a.exec();
}
