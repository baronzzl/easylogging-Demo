#include "log.h"
#include "ELMsgDispatcher.h"
//INITIALIZE_EASYLOGGINGPP
SHARE_EASYLOGGINGPP(sharedLogRepository())

void main() {
	LogInfo() << "log info in app";
	LogDebug() << "log debug in app";
	LogWarn() << "log warn in app";
	LogError() << "log error in app";
}
