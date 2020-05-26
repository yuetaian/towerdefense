#include "towerposition.h"
#include <QPainter>

Towerposition::Towerposition()
{

}

const QSize Towerposition::fixedsize(44, 44);

Towerposition::Towerposition(QPoint _posi, const QPixmap& _savemap/* = QPixmap("://image/2.png")*/)
    : posi(_posi)
    , hastower(false)
    , savemap(_savemap)
{
}

const QPoint Towerposition::centerposi() const
{
    QPoint offsetPoint(fixedsize.width() / 2, fixedsize.height() / 2);
    return posi + offsetPoint;
}

bool Towerposition::containpoint(const QPoint& _posi) const
{
    bool isXInHere = posi.x() < _posi.x() && _posi.x() < (posi.x() + fixedsize.width());
    bool isYInHere = posi.y() < _posi.y() && _posi.y() < (posi.y() + fixedsize.height());
    return isXInHere && isYInHere;
}

bool Towerposition::hasTower() const
{
    return hastower;
}

void Towerposition::sethastower(bool _hastower/* = true*/)
{
    hastower = _hastower;
}

void Towerposition::draw(QPainter *painter) const
{
    painter->drawPixmap(posi.x(), posi.y(), savemap);
}

