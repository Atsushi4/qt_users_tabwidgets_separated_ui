#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

#include <QNetworkAccessManager>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
    class MyWidget1;
    class MyWidget2;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Ui::MyWidget1 *ui_tab1;
    Ui::MyWidget2 *ui_tab2;
    QNetworkAccessManager net;
};
#endif // MAINWINDOW_H
