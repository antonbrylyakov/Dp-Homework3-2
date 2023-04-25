#pragma once
#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include "LogCommand.h"

class LogObserver
{
public: 
    virtual ~LogObserver() = default;
    virtual void onWarning(const std::string& message) {}
    virtual void onError(const std::string& message) {}
    virtual void onFatalError(const std::string& message) {}
protected:
    void executeCommands(const std::string& message);
    std::vector<std::unique_ptr<LogCommand>> m_commands;
};