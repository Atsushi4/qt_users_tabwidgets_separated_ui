#include "mywidget2.h"
#include "ui_mywidget2.h"

#include <QNetworkReply>

MyWidget2::MyWidget2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget2)
{
    ui->setupUi(this);
}

MyWidget2::~MyWidget2()
{
    delete ui;
}

void MyWidget2::setUrl(const QUrl &url)
{
    auto reply = net.get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, this, [=] {
        ui->plainTextEdit->clear();
        ui->plainTextEdit->appendHtml(reply->readAll());
    });
}
