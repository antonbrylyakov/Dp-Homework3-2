#pragma once
#include "LogObserver.h"

class ErrorObserver : public LogObserver
{
public:
	ErrorObserver(const std::string& fileName);
	void onError(const std::string& message) override;
};