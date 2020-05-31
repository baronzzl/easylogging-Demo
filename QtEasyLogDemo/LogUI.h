#pragma once

#include <QWidget>
namespace Ui { class LogUI; };

class LogUI : public QWidget
{
	Q_OBJECT

public:
	LogUI(QWidget *parent = Q_NULLPTR);
	~LogUI();
	void appendError(const QString &msg);
	void appendWarn(const QString &msg);
	void appendInf(const QString &msg);
public slots:
	void onLogMessage(QtMsgType type, const QString &msg);
private:
	Ui::LogUI *ui;
};
