#ifndef MYWIDGET2_H
#define MYWIDGET2_H

#include <QtWidgets/QWidget>

#include <QNetworkAccessManager>

namespace Ui {
class MyWidget2;
}

class MyWidget2 : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget2(QWidget *parent = nullptr);
    ~MyWidget2();

public slots:
    void setUrl(const QUrl &url);

private:
    Ui::MyWidget2 *ui;
    QNetworkAccessManager net;
};

#endif // MYWIDGET2_H
