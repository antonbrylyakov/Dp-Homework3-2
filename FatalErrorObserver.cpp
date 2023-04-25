#include "FatalErrorObserver.h"
#include "FileLogCommand.h"
#include "ConsoleLogCommand.h"

FatalErrorObserver::FatalErrorObserver(const std::string& fileName)
{
	m_commands.push_back(std::make_unique<ConsoleLogCommand>());
	m_commands.push_back(std::make_unique<FileLogCommand>(fileName));
}

void FatalErrorObserver::onFatalError(const std::string& message)
{
	executeCommands(message);
}
