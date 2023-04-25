cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(Homework)
add_executable(homework main.cpp "LogCommand.h"   "ConsoleLogCommand.h" "ConsoleLogCommand.cpp" "FileLogCommand.h" "FileLogCommand.cpp" "ObservableLoggingSubject.h" "LogObserver.h" "ObservableLoggingSubject.cpp" "WarningObserver.h" "WarningObserver.cpp" "LogObserver.cpp" "FatalErrorObserver.h" "FatalErrorObserver.cpp" "ErrorObserver.h" "ErrorObserver.cpp")