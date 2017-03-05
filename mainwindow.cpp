#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&drawer.scene);
    this->currentSize = this->size();

//    { // saving to clipboard
//        this->scene->clearSelection();
//        // Create the image with the exact size of the shrunk scene
//        QImage image(scene->sceneRect().size().toSize(), QImage::Format_ARGB32);
//        image.fill(Qt::white);
//        QPainter painter;
//        painter.begin(&image);
//        painter.setRenderHint(QPainter::Antialiasing);
//        this->scene->render(&painter);
//        painter.end();
//        QApplication::clipboard()->setImage(image,QClipboard::Clipboard);
//    }
    { //creating menus
        down = new QAction("down", this);
        connect(down, SIGNAL(triggered()), this, SLOT(graphDown()));
        up = new QAction("up", this);
        connect(up, SIGNAL(triggered()), this, SLOT(graphUp()));
        menu = menuBar()->addMenu("Graph");
        menu->addAction(down);
        menu->addAction(up);
    }
    drawer.draw(currentSize);
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
        ui->graphicsView->scale(xScale, yScale);
    }
}

void MainWindow::graphDown()
{
    qDebug() << "Down";
}

void MainWindow::graphUp()
{
    qDebug() << "Up";
}
