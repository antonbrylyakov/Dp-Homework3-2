#pragma once
#include "LogObserver.h"
#include <vector>
#include <string>

class ObservableLoggingSubject
{
public:
	virtual ~ObservableLoggingSubject() = default;
	void addObserver(LogObserver* observer);
	void removeObserver(LogObserver* observer);
	void onWarning(const std::string& message) const;
	void onError(const std::string& message) const;
	void onFatalError(const std::string& message) const;
protected:
	std::vector<LogObserver*> m_observers;
};