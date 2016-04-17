#ifndef QTHELLOWORLD_H
#define QTHELLOWORLD_H

#include <QtWidgets/QMainWindow>
#include "ui_qthelloworld.h"

class QtHelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	QtHelloWorld(QWidget *parent = 0);
	~QtHelloWorld();

private:
	Ui::QtHelloWorldClass ui;
};

#endif // QTHELLOWORLD_H
