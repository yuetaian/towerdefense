#ifndef TOWERPOSITION_H
#define TOWERPOSITION_H
#include <QPainter>
#include <QPoint>
#include <QSize>
#include <QPixmap>

class Towerposition
{
public:
    Towerposition();

    Towerposition(QPoint _posi,const QPixmap& _savemap=QPixmap("//images/3.png"));
    void sethastower(bool _hastower=true);
    bool hasTower()const;
    const QPoint centerposi()const;
    bool containpoint(const QPoint& _posi)const;

    void draw(QPainter *painter)const;

private:
    QPoint posi;
    bool hastower;
    QPixmap savemap;

    static const QSize fixedsize;

};

#endif // TOWERPOSITION_H
