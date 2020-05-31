//qt
#include "qteasylogdemo.h"
#include "qvector2d.h"

//stl
#include <vector>
#include <map>

//eigen
#include <eigen\dense>

#include "log.h"
#include "LogUI.h"

#include <thread>

static std::thread t1, t2;

QtEasyLogDemo::QtEasyLogDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	logui = new LogUI();
	
	ui.logLyt->addWidget(logui);
	
	//test
	LogInfo() << "zheng zelong";
	LogInfo() << 2.0;
	LogInfo() << true;
	LogError() << "zheng zelong";
	LogWarn() << "zheng zelong";
	LogDebug() << "zheng zelong";

	//test qt data
	//LOG(INFO) << QVector2D(2, 3);  //暂不支持
	LogInfo() << QString("QString");
	LogInfo() << QVector<int>(1000,3);


	//test stl data
	LogInfo() << std::string("std::string");
	LogInfo() << std::vector<int>(3, 10);
	std::map<int, std::string> mp = { { 1, "张三" },{ 2, "李四" } };
	LogError() << mp;

	//eigen
	LogInfo() << std::endl <<Eigen::Matrix4d::Identity();
	LogInfo() << Eigen::Vector4d::Identity().transpose();

	//boost 
	LogInfo() << boost::container::vector<int>(4, 10);

	t1 = std::thread([]() {for (int i = 0; i < 10; i++)  LogInfo() << "thread 1 run"; });
	t2 = std::thread([]() {for (int i = 0; i < 10; i++)  LogInfo() << "thread 2 run"; });
}

QtEasyLogDemo::~QtEasyLogDemo()
{
	if (t1.joinable()) t1.join();
	if (t2.joinable()) t2.join();
}
