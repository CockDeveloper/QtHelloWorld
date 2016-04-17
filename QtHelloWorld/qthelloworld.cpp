#include "stdafx.h"
#include "qthelloworld.h"
//#include <string>
//#include <iostream>

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
    //const char* title = (char*)str;
    ui.lblOkShow->setText(QApplication::translate("QtHelloWorldClass", "HW", 0));
}

bool QtHelloWorld::isClear()
{
    return m_isClear;
}

void QtHelloWorld::on_btnOk_Clicked()
{
    showHelloWorld();
}

void QtHelloWorld::showHelloWorld()
{
    QString info;
    if(isClear())
    {
            info = "";
    }else
    {
            info = "Hellow World";
    }
    setClear( !isClear()) ;
    setLblOkShow( info );
}

void QtHelloWorld::setClear(bool status)
{
    m_isClear = status;
}