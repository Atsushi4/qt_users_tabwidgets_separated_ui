#ifndef MYWIDGET1_H
#define MYWIDGET1_H

#include <QtWidgets/QWidget>

class QUrl;
namespace Ui {
class MyWidget1;
}

class MyWidget1 : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget1(QWidget *parent = nullptr);
    ~MyWidget1();

signals:
    void urlRequested(const QUrl &url);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWidget1 *ui;
};

#endif // MYWIDGET1_H
