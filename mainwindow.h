#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "towerposition.h"
#include <QList>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;

    QList<Towerposition> towerpositionsList;
    void loadTowerpositions();

};
#endif // MAINWINDOW_H
