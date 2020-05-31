// dllmain.cpp : ���� DLL Ӧ�ó������ڵ㡣
#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>
#include "log.h"
INITIALIZE_EASYLOGGINGPP

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	// �������ļ�������log����
	el::Configurations conf("../src/logConf.conf");
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
		// Reconfigure single logger
		el::Loggers::reconfigureLogger("default", conf);
		// Actually reconfigure all loggers instead
		el::Loggers::reconfigureAllLoggers(conf);

		// �����ж����֧�ֶ�����ɫ
		el::Loggers::addFlag(el::LoggingFlag::ColoredTerminalOutput);
		break;
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

