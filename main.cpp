#include <iostream>
#ifdef _WIN32
#include "windows.h"
#endif
#include "ObservableLoggingSubject.h"
#include "ErrorObserver.h"
#include "WarningObserver.h"
#include "FatalErrorObserver.h"


void print(LogCommand& cmd, const std::string& message)
{
	cmd.print(message);
}

int main()
{
	setlocale(LC_ALL, "Russian");
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	std::string logFileName("log.txt");

	ObservableLoggingSubject subj;

	WarningObserver wObs;
	ErrorObserver eObs(logFileName);
	FatalErrorObserver feObs(logFileName);

	subj.addObserver(std::addressof(wObs));
	subj.addObserver(std::addressof(eObs));
	subj.addObserver(std::addressof(feObs));

	subj.onWarning("Warning message");
	subj.onError("Error message");
	subj.onFatalError("Fatal error message");

	subj.removeObserver(std::addressof(wObs));
	subj.removeObserver(std::addressof(eObs));
	subj.removeObserver(std::addressof(feObs));

	return 0;
}