#ifndef SCREEN_H
#define SCREEN_H


#include "qdebug.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>
#include <QLineEdit>
#include <QFrame>
#include <QLabel>
#include <QListWidgetItem>
#include <QListWidget>


class screen
{

protected:

    QLabel *top_frame;

public:
    screen();
    ~screen();
    QGraphicsView *view;
    QGraphicsScene *scene;


};

#endif // SCREEN_H
