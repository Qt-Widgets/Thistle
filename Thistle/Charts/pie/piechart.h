/*
This file is part of Thistle.

Thistle is free software: you can redistribute it and/or modify
it under the terms of the Lesser GNU General Public License as published by
the Free Software Foundation, either version 3 of the License.

Thistle is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
Lesser GNU General Public License for more details.

You should have received a copy of the Lesser GNU General Public License
along with Thistle.    If not, see <http://www.gnu.org/licenses/>.

Thistle    Copyright (C) 2013    Dimitry Ernot & Romha Korev
*/

#ifndef THISTLE_PIECHART_H
#define THISTLE_PIECHART_H

#include "../base/seriechart.h"

#include "private/piechart_p.h"

namespace Thistle
{

class AbstractChart;

class PieChart : public AbstractChart
{
	Q_OBJECT
	Q_DECLARE_PRIVATE( PieChart );
	Q_PROPERTY(qreal startAngle READ startAngle WRITE setStartAngle)
	friend class PieLegendView;
public:
	PieChart( QWidget* parent = 0 );

	void scrollTo( const QModelIndex& index, ScrollHint hint = EnsureVisible );
	void setRing( bool ring = true );

	virtual void paint( QPainter& painter );

protected:
	PieChart( PieChartPrivate* d, QWidget* parent = 0 );

	qreal startAngle() const;

	void scan();

	virtual void configureColor( QPainter& painter, QColor base, int flag = 0 ) const;

	virtual QPainterPath itemPath( const QModelIndex& index ) const;
	virtual QPainterPath itemPart( qreal angle, qreal delta, bool splitted = false ) const;

	virtual void paintEvent( QPaintEvent* ev );
	virtual void paintPart( QPainter& painter, qreal angle, qreal delta, QColor color, bool isSelected = false ) const;
	virtual void paintPartSplitted( QPainter& painter, qreal angle, qreal delta, QColor color, bool isSelected = false ) const;
	virtual QPointF splittedOffset( qreal angle, qreal delta ) const;
	virtual void updateRects();


public slots:
	void setStartAngle( qreal angle );
};

}

#endif // THISTLE_PIECHART_H
