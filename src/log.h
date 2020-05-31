#ifndef LOG_H
#define LOG_H

// ʹ��qt��log���
#ifdef QT_LOG
#include <qdebug>
#include <iostream>
#define LogInfo() qInfo() 
#define LogWarn()  qWarning()
#define LogError() qCritical() 
#define LogDebug() qDebug()
#endif

// easylogging ��־���
#if 1
#include "easylogging++.h"

#define LogInfo()  LOG(INFO)
#define LogWarn()  LOG(WARNING)
#define LogError() LOG(ERROR)
#define LogDebug() LOG(DEBUG)
#endif

// ����̨�����־
#if 0
#include <iostream>
#define LogError() std::cout << "error:(" << __FILE__ <<", "<< __LINE__<<", "<< __func__<< ")"
#define LogInfo() std::cout 
#endif

#define CHECK(exp) {if(!(exp)) return false;}
#define CHECK_AND_LOGERROR(exp, errStr) {if(!(exp)) {LogError() << errStr; return false;} }

#define LogRun(exp)  LogInfo() << "Begin "<< #exp << ':\n'\
			<< "------------------------------------------------\n";\
			exp;	\
			LogInfo() << "End "<< #exp << ':\n'\
			<< "------------------------------------------------\n";
#endif // LOG_H