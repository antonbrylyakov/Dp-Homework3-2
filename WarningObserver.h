#pragma once
#include "LogObserver.h"

class WarningObserver : public LogObserver
{
public:
	WarningObserver();
	void onWarning(const std::string& message) override;
};