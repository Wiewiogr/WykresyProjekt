#ifndef GRAPH_H
#define GRAPH_H

#include <QVector>
#include "graphline.h"

class Graph
{
public:
    QVector<GraphLine> lines;
    float DdParameter;
    float RimParameter;
    Graph();
};

#endif // GRAPH_H
