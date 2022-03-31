#ifndef __SEND_MESSAGE_COMMAND_H__
#define __SEND_MESSAGE_COMMAND_H__

#include "Command.h"
#include "Publisher.h"

class SendMessageCommand   :   public Command
{
private:
    Publisher *m_publisher = nullptr;
    std::string m_commandName;
    std::string m_message;

public:
    SendMessageCommand(Publisher *publisher, const std::string & message);
    void Execute();
    std::string SetMessageText(const std::string & message);
    std::string GetCommandName() const;
};

#endif