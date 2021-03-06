//
// Created by alon on 22/12/18.
//

#ifndef AP1_SEMETSER_PROJECT_COMMANDDATA_H
#define AP1_SEMETSER_PROJECT_COMMANDDATA_H

#include "../DefinesAndTypedefs.h"

class CommandData {
public:
    CommandData(ConstStringRef name, ConstStringRef data);
    ~CommandData();

    const std::string& getName() { return m_name; }
    ConstStringRef getData() { return m_commandData; }
    void setName(ConstStringRef name) { m_name = name; }
    std::queue<CommandData*> getQueue() { return m_commandsQueue; }
    void setCommandsQueue(const std::queue<CommandData *> &commandsQueue) { m_commandsQueue = commandsQueue; }


private:
    std::string m_name;
    std::string m_commandData;
    std::queue<CommandData*> m_commandsQueue;
};

typedef std::queue<CommandData*> CommandDataQueue;
typedef std::vector<CommandData*> CommandDataVector;

#endif //AP1_SEMETSER_PROJECT_COMMANDDATA_H
