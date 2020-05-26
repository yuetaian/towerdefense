#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadTowerpositions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{

    QPainter* painterr=new QPainter();
    painterr->begin(this);

    QPixmap cachePix("://images/2.png");
    QPainter posipainter(&cachePix);

    foreach (const Towerposition &towerPos, towerpositionsList)
        towerPos.draw(&posipainter);

//    QPainter painter(this);
//    painter.drawPixmap(0,0,QPixmap("://images/1.png"));

}

void MainWindow::loadTowerpositions()
{
    QPoint posi[] =
    {
        QPoint(65, 220),
        QPoint(155, 220),
        QPoint(245, 220),
        QPoint(335, 220),

        QPoint(100, 125),
        QPoint(195, 125),
        QPoint(280, 125),
        QPoint(370, 125),

        QPoint(80, 35),
        QPoint(170, 35),
        QPoint(260, 35),
        QPoint(350, 35)
    };
    int len	=sizeof(posi) / sizeof(posi[0]);

    for (int i = 0; i < len; ++i)
        towerpositionsList.push_back(posi[i]);
}

