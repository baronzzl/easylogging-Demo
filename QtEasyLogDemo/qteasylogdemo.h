#ifndef QTEASYLOGDEMO_H
#define QTEASYLOGDEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_qteasylogdemo.h"

class LogUI;
class QtEasyLogDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtEasyLogDemo(QWidget *parent = 0);
	~QtEasyLogDemo();

private:
	Ui::QtEasyLogDemoClass ui;
	LogUI * logui;
};

#endif // QTEASYLOGDEMO_H
