#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->tab, &MyWidget1::urlRequested, ui->tab_2, &MyWidget2::setUrl);
    connect(ui->tab, &MyWidget1::urlRequested, this, [this] {ui->tabWidget->setCurrentIndex(1);});
}

MainWindow::~MainWindow()
{
    delete ui;
}

