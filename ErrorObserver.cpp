#include "ErrorObserver.h"
#include "FileLogCommand.h"



ErrorObserver::ErrorObserver(const std::string& fileName)
{
	m_commands.push_back(std::make_unique<FileLogCommand>(fileName));
}

void ErrorObserver::onError(const std::string& message)
{
	executeCommands(message);
}
