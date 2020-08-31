#include "mywidget1.h"
#include "ui_mywidget1.h"

#include <QUrl>

MyWidget1::MyWidget1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget1)
{
    ui->setupUi(this);
}

MyWidget1::~MyWidget1()
{
    delete ui;
}

void MyWidget1::on_pushButton_clicked()
{
    emit urlRequested(QUrl(ui->lineEdit->text()));
}
