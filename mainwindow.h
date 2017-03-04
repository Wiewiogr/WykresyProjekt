#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBrush>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QResizeEvent>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    QGraphicsLineItem *line;
    QSize currentSize;

public slots:
    void resizeEvent(QResizeEvent *event);


};

#endif // MAINWINDOW_H
