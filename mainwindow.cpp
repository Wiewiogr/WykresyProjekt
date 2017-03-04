#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(2);

    rectangle = scene->addRect(100, 0, 80, 100, outlinePen, blueBrush);

    // addEllipse(x,y,w,h,pen,brush)
    ellipse = scene->addEllipse(0, -100, 300, 60, outlinePen, greenBrush);
    line = scene->addLine(100,100,120,120,outlinePen);

    text = scene->addText("bogotobogo.com", QFont("Arial", 20) );
    ui->graphicsView->scale(0.5,0.5);
    //connect(this, SIGNAL(resizeEvent()), SLOT(resizeDone()));
    this->currentSize = this->size();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    currentSize = event->size();
    QSize previousSize = event->oldSize();
    if(previousSize.height() > 0)
    {
        float yScale = 1.0*currentSize.height()/previousSize.height();
        float xScale = 1.0*currentSize.width()/previousSize.width();
//        qDebug() << "original size w: " << previousSize.width() << " h : "<<previousSize.height();
//        qDebug() << "current size w: " << currentSize.width() << " h : "<<currentSize.height();
//        qDebug() << "xScale : " << xScale;
//        qDebug() << "yScale : " << yScale;
        ui->graphicsView->scale(xScale, yScale);
    }
}
