#include <algorithm>
#include "ObservableLoggingSubject.h"

void ObservableLoggingSubject::addObserver(LogObserver* observer)
{
	m_observers.push_back(observer);
}

void ObservableLoggingSubject::removeObserver(LogObserver* observer)
{
	auto removed = std::remove(m_observers.begin(), m_observers.end(), observer);
	m_observers.erase(removed, m_observers.end());
}

void ObservableLoggingSubject::onWarning(const std::string& message) const
{
	std::for_each(m_observers.begin(), m_observers.end(), [message](auto obs) { obs->onWarning(message); });
}

void ObservableLoggingSubject::onError(const std::string& message) const
{
	std::for_each(m_observers.begin(), m_observers.end(), [message](auto obs) { obs->onError(message); });
}

void ObservableLoggingSubject::onFatalError(const std::string& message) const
{
	std::for_each(m_observers.begin(), m_observers.end(), [message](auto obs) { obs->onFatalError(message); });
}
