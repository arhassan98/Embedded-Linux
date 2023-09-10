# Log Handler

A versatile logging class, `LogHandler`, is implemented in this C++ program. It allows users to handle logs with different levels of severity (Info, Warn, Error) and provides functionality to set the log level, log messages, and later dump and clear the log buffer.

## Class: LogHandler

The `LogHandler` class provides flexibility in managing log messages. It allows developers to filter log messages based on their importance, making it useful for debugging and error reporting.

## Public Members

### Enum: Level

- Info: Represents an informational log level.
- Warn: Represents a warning log level.
- Error: Represents an error log level.

### Constructor: LogHandler()

- Initializes the log handler with the default log level (`Info`).

### Static Function: SetLogLevel(Level level)

- Sets the current log level to the specified level.

### Class: LogMessage

- Represents an individual log message with a specific log level.

### Constructor: LogMessage(Level level)

- Initializes a log message with the specified log level.

### Destructor: ~LogMessage()

- Appends the log message to the log buffer if its level is equal to or higher than the current log level.

### Operator Overloading: operator<<(const std::string &msg)

- Appends the specified string message to the log message.
- Returns a reference to the modified `LogMessage` object for chaining.

### Static Function: Dump()

- Prints all log messages in the log buffer to the console.

### Static Function: Clear()

- Clears the log buffer.

## Private Members

### Static Variable: currentLevel

- Stores the current log level.

### Static Variable: logBuffer

- Stores the log messages.

## Usage Example

The `main` function demonstrates the usage of the `LogHandler` class.

1. Sets the log level to `Warn`.
2. Logs three messages using different log levels.
3. Dumps the log messages to the console.
4. Clears the log buffer.

## Output

```
Warning: Forget to close the file.
An error occurred.
```