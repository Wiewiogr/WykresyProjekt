#include "graphdrawer.h"

GraphDrawer::GraphDrawer()
{
//    QBrush greenBrush(Qt::green);
//    QBrush blueBrush(Qt::blue);
//    QPen outlinePen(Qt::black);
//    //scene.setSceneRect(0,0,200,200);
//    outlinePen.setWidth(1);
//
//    rectangle = scene.addRect(100, 0, 80, 100, outlinePen, blueBrush);
//
//    ellipse = scene.addEllipse(0, -100, 300, 60, outlinePen, greenBrush);
//    line = scene.addLine(0,0,100,100,outlinePen);
//
//    text = scene.addText("bogotobogo.com", QFont("Arial", 20) );
}

void GraphDrawer::draw(QSize size)
{
    drawGrid(size);
}

void GraphDrawer::drawGrid(QSize size)
{
    float gridSize = 0.15;
    float leftOffset = 0.1;
    float topOffset = 0.1;

    QPen outlinePen(Qt::blue);
    outlinePen.setWidth(1);

    for(int i = 0 ; i <= 5; i++)
    {
        gridLines.append(QSharedPointer<QGraphicsItem>(
                             scene.addLine((leftOffset-0.5)*size.width(), (topOffset + i * gridSize - 0.5)*size.height(),
                                       (leftOffset + 3*gridSize-0.5)*size.width(), (topOffset + i * gridSize - 0.5)*size.height(),
                                       outlinePen)));
    }

    for(int i = 0 ; i <= 3; i++)
    {
        gridLines.append(QSharedPointer<QGraphicsItem>(
                             scene.addLine((leftOffset +i *gridSize-0.5)*size.width(), (topOffset - 0.5)*size.height(),
                                       (leftOffset + i*gridSize-0.5)*size.width(), (topOffset + 5 * gridSize - 0.5)*size.height(),
                                       outlinePen)));
    }
}

void GraphDrawer::drawGraphLine(QSize size, GraphLine line)
{

}

void GraphDrawer::drawGraph(QSize size, Graph line)
{

}
