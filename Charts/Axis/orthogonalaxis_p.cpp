#include "orthogonalaxis_p.h"

#include "../../kernel/global.h"

namespace Thistle {

OrthogonalAxisPrivate::OrthogonalAxisPrivate()
    : AxisPrivate() {
    this->model = 0;
    this->nbDigits = 3;
    this->nbTicks = 5;
    this->tickSize = 0;
    this->axisPen = QPen( QColor( Global::DarkGray ), 1 );
    this->startOnAxis = false;
    this->verticalLabels = true;

    this->yLabelsLength = 10;
    this->xLabelsLength = 0;
}

}