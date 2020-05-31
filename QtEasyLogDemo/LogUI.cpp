#include "LogUI.h"
#include "ui_LogUI.h"
#include "ELMsgDispatcher.h"

LogUI::LogUI(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::LogUI();
	ui->setupUi(this);
	ELMsgDispatcher::instance()->registerCB([&](int level, const std::string &str) {
		QString &msg = QString::fromLocal8Bit(str.c_str());
		if (level == ELMsgDispatcher::eInfo) {
			appendInf(msg);
		}
		else if (level == ELMsgDispatcher::eError) {
			appendError(msg);
		}
		else {
			appendWarn(msg);
		}
	}); 
}

void LogUI::appendError(const QString &msg)
{
	ui->errorEdt->appendPlainText(msg);
}

void LogUI::appendWarn(const QString &msg)
{
	ui->warnEdt->appendPlainText(msg);
}

void LogUI::appendInf(const QString &msg)
{
	ui->infEdt->appendPlainText(msg);
}

void LogUI::onLogMessage(QtMsgType type, const QString &msg)
{
	if (type == QtMsgType::QtCriticalMsg) {
		appendError(msg);
	}
	else if (type == QtMsgType::QtWarningMsg) {
		appendWarn(msg);
	}
	else {
		appendInf(msg);
	}
}

LogUI::~LogUI()
{
	delete ui;
}
