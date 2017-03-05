#ifndef GRAPHLINE_H
#define GRAPHLINE_H

#include <QVector>

class GraphLine
{
public:
    GraphLine();
    QVector<float> points;
    float RtRmParameter;
};

#endif // GRAPHLINE_H
