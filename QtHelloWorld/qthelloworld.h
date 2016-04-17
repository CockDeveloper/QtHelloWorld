#ifndef QTHELLOWORLD_H
#define QTHELLOWORLD_H

#include <QtWidgets/QMainWindow>
#include "ui_qthelloworld.h"
//#include <string>
//#include <iostream>


class QtHelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	QtHelloWorld(QWidget *parent = 0);
	~QtHelloWorld();
	void setLblOkShow(QString& str);
	bool isClear();
	
	public slots:
		void on_btnOk_Clicked();

protected:
	void showHelloWorld();
private:
	void setClear(bool status);

private:
	Ui::QtHelloWorldClass ui;
	bool m_isClear;
};

#endif // QTHELLOWORLD_H
