#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QBrush>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QResizeEvent>
#include <QClipboard>
#include <QImage>
#include <QPainter>
#include <QDebug>
#include <QMenu>
#include "graphdrawer.h"
#include "graphmanager.h"


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
    GraphDrawer drawer;
    Ui::MainWindow *ui;
    QMenu* menu;
    QAction* down;
    QAction* up;
    QSize currentSize;
    GraphManager managers[2];

public slots:
    void resizeEvent(QResizeEvent *event);
    void graphDown();
    void graphUp();
};

#endif // MAINWINDOW_H
