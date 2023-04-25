#include <algorithm>
#include "WarningObserver.h"
#include "ConsoleLogCommand.h"


WarningObserver::WarningObserver()
{
	m_commands.push_back(std::make_unique<ConsoleLogCommand>());
}

void WarningObserver::onWarning(const std::string& message)
{
	executeCommands(message);
}
