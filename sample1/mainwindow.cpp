#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mywidget1.h"
#include "mywidget2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto w1 = new MyWidget1;
    auto w2 = new MyWidget2;
    connect(w1, &MyWidget1::urlRequested, w2, &MyWidget2::setUrl);
    connect(w1, &MyWidget1::urlRequested, this, [this] {ui->tabWidget->setCurrentIndex(1);});
    ui->tabWidget->addTab(w1, "Tab 1");
    ui->tabWidget->addTab(w2, "Tab 2");
}

MainWindow::~MainWindow()
{
    delete ui;
}

