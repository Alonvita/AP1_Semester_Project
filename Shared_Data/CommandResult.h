//
// Created by alon on 07/12/18.
//

#ifndef AP1_SEMETSER_PROJECT_COMMANDRESULT_H
#define AP1_SEMETSER_PROJECT_COMMANDRESULT_H

#include <string>

/**
 * Defines the types of commands that the user can use.
 */
enum Command {
    EXECUTION_FAILURE = -1,
    UNDEFINED,
    BIND_COMMAND,
    OPEN_SERVER,
    CREATE_VAR,
    CALCULATE_EXPRESSION,
    LOOP_ENDS,
    ASSIGN_VAR,
    IF_END,
    SLEEP,
    PRINT,
    CLOSE,
    OPERATION
};

class CommandResult {
public:
    explicit CommandResult() : m_success(false), m_command(UNDEFINED), m_data("No data\n"), m_keepConnection(true) {};
    CommandResult(bool success, Command cmd, std::string data, bool keepConnection) :
    m_success(success), m_command(cmd), m_data(std::move(data)), m_keepConnection(keepConnection) {};

    bool getType() { return this->m_command; }
    std::string getData() { return this->m_data; }
    bool keepCon() { return this->m_keepConnection; }
    bool commandSucceeded() { return this->m_success; }

private:
    bool m_success;
    Command m_command;
    std::string m_data;
    bool m_keepConnection;
};

#endif //AP1_SEMETSER_PROJECT_COMMANDRESULT_H
