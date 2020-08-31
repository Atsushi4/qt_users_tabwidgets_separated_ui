#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_mywidget1.h"
#include "ui_mywidget2.h"

#include <QNetworkReply>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ui_tab1(new Ui::MyWidget1)
    , ui_tab2(new Ui::MyWidget2)
{
    ui->setupUi(this);
    ui_tab1->setupUi(ui->tab);
    ui_tab2->setupUi(ui->tab_2);
    connect(ui_tab1->pushButton, &QPushButton::clicked, this, [=] {
        auto reply = net.get(QNetworkRequest(QUrl(ui_tab1->lineEdit->text())));
        connect(reply, &QNetworkReply::finished,
                ui_tab2->plainTextEdit, [=] {ui_tab2->plainTextEdit->appendHtml(reply->readAll());});
    });
    connect(ui_tab1->pushButton, &QPushButton::clicked, this, [=] {ui->tabWidget->setCurrentIndex(1);});
}

MainWindow::~MainWindow()
{
    delete ui;
}

