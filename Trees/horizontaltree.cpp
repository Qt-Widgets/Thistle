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

#include "horizontaltree.h"
#include <QPainter>
#include <QScrollBar>

HorizontalTree::HorizontalTree() : VerticalTree() {
}

void HorizontalTree::positionsInView() {
    myRealSize.setWidth( ( myDepth ) * ( myXDistance + myItemRect.width() ) + myItemRect.width() );
    myRealSize.setHeight( myLeft * ( myYDistance + myItemRect.height() ) + myItemRect.height() );

    setScrollBarValues();

    QPointF offset( myItemRect.width()/2, myItemRect.height()/2 );
    offset += myItemOffset;
    Q_FOREACH( QModelIndex index, myItemTreePos.keys() ) {
            QPointF p = myItemTreePos[ index ];
            myItemPos[index] = QPointF( p.y() * ( myXDistance + myItemRect.width() ), p.x() * ( myYDistance + myItemRect.height() ) ) + offset;
    }
}

void HorizontalTree::setScrollBarValues() {
    VerticalTree::setScrollBarValues();
    qreal delta = height() - myRealSize.height();
    if ( delta > 20 ) {
        myItemOffset = QPointF( 10, delta/2.0 );
    }
}
