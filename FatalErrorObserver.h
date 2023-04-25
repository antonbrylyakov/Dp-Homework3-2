#pragma once
#include "LogObserver.h"

class FatalErrorObserver : public LogObserver
{
public:
	FatalErrorObserver(const std::string& fileName);
	void onFatalError(const std::string& message) override;
};