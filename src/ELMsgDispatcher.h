/*
* easylogging++ 日志消息派发器
*/
#ifndef LOGDLL_EXPORTS
#define ALG_LIB _declspec(dllimport)
#else
#define ALG_LIB _declspec(dllexport)

#endif

#include <vector>
#include <functional>

#include "easylogging++.h" 

class ALG_LIB ELMsgDispatcher
{
public:
	enum eLogLevel
	{
		eInfo,
		eWarning,
		eError,
	};
	using logHander_t = std::function<void(int nLever, const std::string &sMsg)>;

	static ELMsgDispatcher * instance();
	void setDispatchable(bool bDispatch);
	void registerCB(logHander_t cb);
	void doLog(int nLevel, const std::string &sMsg);

private:
	ELMsgDispatcher();
	bool m_bDispatch;
	static ELMsgDispatcher * m_instance;
	std::vector<logHander_t> m_vLogCK;
};

// 获得共享的日记仓库
ALG_LIB el::base::type::StoragePointer sharedLogRepository();


