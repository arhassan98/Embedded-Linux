#include <iostream>
#include <string>
#include <vector>

/**
 * @file log_handler.cpp
 * @brief Handle logs with different levels and store messages for dumping and
 * clearing.
 *
 * This C++ program defines a versatile logging class, "LogHandler," which
 * enables logging messages with different severity levels (Info, Warn, Error).
 * It allows users to set the current log level, log messages, and later dump
 * and clear the log buffer.
 *
 * @details
 * The "LogHandler" class provides flexibility in managing log messages,
 * allowing developers to filter log messages based on their importance. It is
 * particularly useful for debugging and error reporting.
 *
 * @author Ahmed Reda Hassan
 * @date   10-09-2023
 */

class LogHandler {
public:
  enum class Level {
    Info,
    Warn,
    Error,
  };

  // Log constructor
  LogHandler() {
    currentLevel = Level::Info; // Default log level
  }

  // Set the current log level
  static void SetLogLevel(Level level) { currentLevel = level; }

  // Log messages with the specified level
  class LogMessage {
  public:
    LogMessage(Level level) : level(level) {}

    ~LogMessage() {
      if (level >= currentLevel) {
        logBuffer.push_back(message);
      }
    }

    LogMessage &operator<<(const std::string &msg) {
      message += msg;
      return *this;
    }

  private:
    Level level;
    std::string message;
  };

  // Dump log messages to the console
  static void Dump() {
    for (const auto &message : logBuffer) {
      std::cout << message << std::endl;
    }
  }

  // Clear the log buffer
  static void Clear() { logBuffer.clear(); }

private:
  static Level currentLevel;
  static std::vector<std::string> logBuffer;
};

LogHandler::Level LogHandler::currentLevel = LogHandler::Level::Info;
std::vector<std::string> LogHandler::logBuffer;

int main() {
  // Set the log level to Warn
  LogHandler::SetLogLevel(LogHandler::Level::Warn);

  // Log some messages
  LogHandler::LogMessage(LogHandler::Level::Info)
      << "This is an informational message.";
  LogHandler::LogMessage(LogHandler::Level::Warn)
      << "Warning: Forget to close the file.";
  LogHandler::LogMessage(LogHandler::Level::Error) << "An error occurred.";

  // Dump and clear the log buffer
  LogHandler::Dump();
  LogHandler::Clear();

  return 0;
}