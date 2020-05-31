
#include "qteasylogdemo.h"
#include <QtWidgets/QApplication>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "log.h"
#include "ELMsgDispatcher.h"

SHARE_EASYLOGGINGPP(sharedLogRepository())


// easylog 日志回调类
class HMLogDisImpl : public el::LogDispatchCallback {
public:
	void handle(const el::LogDispatchData *data) {
		static std::map<el::Level, int> mp
		{
			{ el::Level::Info, ELMsgDispatcher::eInfo },
			{ el::Level::Error, ELMsgDispatcher::eError },
			{ el::Level::Warning, ELMsgDispatcher::eWarning },
		};
		auto lv = data->logMessage()->level();
		auto itr = mp.find(lv);
		if (itr != mp.end())
		{
			auto pLog = data->logMessage();
			std::stringstream str;
			auto t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
			str << std::put_time(std::localtime(&t), "%X") <<" [" << pLog->file() << ": " << pLog->line() /*<< "," << pLog->func() */<< "]-->" << pLog->message();
			ELMsgDispatcher::instance()->doLog(itr->second, str.str());
		}
	}

};

// 日志程序宕机处理函数
void myCrashHandler(int sig) {
	LogError() << "Woops! Crashed!";
	// FOLLOWING LINE IS ABSOLUTELY NEEDED AT THE END IN ORDER TO ABORT APPLICATION
	el::Helpers::crashAbort(sig);
}

int main(int argc, char *argv[])
{
	el::Helpers::installLogDispatchCallback<HMLogDisImpl>("RDG");
	// 设置宕机处理函数
	el::Helpers::setCrashHandler(myCrashHandler);

	//int *I = NULL;
	//*I = 10;
	QApplication a(argc, argv);
	QtEasyLogDemo w;
	w.show();
	return a.exec();
}
