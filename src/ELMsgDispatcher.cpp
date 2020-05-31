#include "ELMsgDispatcher.h"
#include <sstream>
#include <mutex>

ELMsgDispatcher * ELMsgDispatcher::m_instance = 0;
ELMsgDispatcher::ELMsgDispatcher()
{
	m_bDispatch = true;
}
ELMsgDispatcher * ELMsgDispatcher::instance()
{
	static std::mutex mutex;
	if (!m_instance) {
		std::lock_guard<std::mutex> gd(mutex);
		if (!m_instance)
			m_instance = new ELMsgDispatcher;
	}
	return m_instance;
}

void ELMsgDispatcher::setDispatchable(bool bDispatch)
{
	m_bDispatch = bDispatch;
}

void ELMsgDispatcher::registerCB(logHander_t cb)
{
	m_vLogCK.push_back(cb);
}

void ELMsgDispatcher::doLog(int nLevel, const std::string & sMsg)
{
	if (!m_bDispatch) return;
	for (auto &v : m_vLogCK){
		v(nLevel, sMsg);
	}
}

el::base::type::StoragePointer sharedLogRepository()
{
	return el::Helpers::storage();
}


