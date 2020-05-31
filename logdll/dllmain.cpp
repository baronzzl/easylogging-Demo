// dllmain.cpp : 定义 DLL 应用程序的入口点。
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>
#include "log.h"
INITIALIZE_EASYLOGGINGPP

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	// 从配置文件中设置log配置
	el::Configurations conf("../src/logConf.conf");
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
		// Reconfigure single logger
		el::Loggers::reconfigureLogger("default", conf);
		// Actually reconfigure all loggers instead
		el::Loggers::reconfigureAllLoggers(conf);

		// 设置中断输出支持多种颜色
		el::Loggers::addFlag(el::LoggingFlag::ColoredTerminalOutput);
		break;
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

