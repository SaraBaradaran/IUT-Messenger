#ifndef SET_BACKGROUND_H
#define SET_BACKGROUND_H

#include <QPushButton>
#include <QLabel>
#include <QGraphicsScene>
class set_background
{
public:
    set_background();

    QGraphicsScene *scene;
    QPushButton *push[5];
    QLabel *label;
};

#endif // SET_BACKGROUND_H
