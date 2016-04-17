#include "stdafx.h"
#include "qthelloworld.h"

QtHelloWorld::QtHelloWorld(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    setClear(false);
}

QtHelloWorld::~QtHelloWorld()
{

}

void QtHelloWorld::setLblOkShow(QString& str)
{
    ui.lblOkShow->setText(str);
}

bool QtHelloWorld::isClear()
{
    return m_isClear;
}

void QtHelloWorld::on_btnOk_clicked()
{
    showHelloWorld();
}

void QtHelloWorld::showHelloWorld()
{
    QString info;
    info = isClear() == true?
            "":
            "Hellow World";
    setClear( !isClear()) ;
    setLblOkShow( info );
}

void QtHelloWorld::setClear(bool status)
{
    m_isClear = status;
}