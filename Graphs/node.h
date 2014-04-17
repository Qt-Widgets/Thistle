/*
 This file is part of Marb.

    Marb is free software: you can redistribute it and/or modify
    it under the terms of the Lesser GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    Marb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    Lesser GNU General Public License for more details.

    You should have received a copy of the Lesser GNU General Public License
    along with Marb.    If not, see <http://www.gnu.org/licenses/>.

 Marb    Copyright (C) 2013    Dimitry Ernot & Romha Korev
*/

#ifndef NODE_H
#define NODE_H

#include <QPointF>
#include <QList>
#include <QModelIndex>

#include "edge.h"

namespace Marb {

class Node;

struct NodePrivate {
    QPointF pos;
    QPointF newPos;
    QList<Node*> connectedNode;
};

class Node {
private:
    NodePrivate* d_ptr;
public:
    Node();
    void process();
    void calculateForce();
    QPointF pos() const;
    QList<Node*> edges() const;
    void setPos( qreal x, qreal y );
    void setPos( QPointF p );
    void addEdge( Node* node );
    inline bool isNull() const { return d_ptr->pos.isNull(); }
    inline void init() { d_ptr->pos = QPointF(); }

};

}

#endif // NODE_H
