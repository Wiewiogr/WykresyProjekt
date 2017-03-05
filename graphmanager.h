#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H

#include "graph.h"
#include <QVector>


class GraphManager
{
public:
    QVector<Graph> graphs;
    int currentGraph;
    GraphManager();
};

#endif // GRAPHMANAGER_H
