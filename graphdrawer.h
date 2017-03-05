#ifndef GRAPHDRAWER_H
#define GRAPHDRAWER_H

#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QSize>
#include <QVector>
#include <QSharedPointer>
#include "graph.h"


class GraphDrawer
{
public:
    GraphDrawer();
    void draw(QSize size);
    QGraphicsScene scene;
    QVector<QSharedPointer<QGraphicsItem>> gridLines;
    void drawGrid(QSize size);
    void drawGraphLine(QSize size, GraphLine line);
    void drawGraph(QSize size, Graph line);
};

#endif // GRAPHDRAWER_H
