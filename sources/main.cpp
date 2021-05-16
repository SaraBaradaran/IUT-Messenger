#include <QApplication>

#include "chatroom.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Chatroom chatroom;
    chatroom.view->show();


    return a.exec();
}
