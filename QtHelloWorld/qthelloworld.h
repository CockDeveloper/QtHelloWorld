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
	void setLblOkShow(QString& str);
	bool isClear();
	
	public slots:
		void on_btnOk_clicked();

protected:
	void showHelloWorld();
private:
	void setClear(bool status);

private:
	Ui::QtHelloWorldClass ui;
	bool m_isClear;
};

#endif // QTHELLOWORLD_H
