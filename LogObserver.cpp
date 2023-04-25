#include <algorithm>
#include "LogObserver.h"

void LogObserver::executeCommands(const std::string& message)
{
	std::for_each(m_commands.begin(), m_commands.end(), [message](auto& cmd) { cmd->print(message); });
}
