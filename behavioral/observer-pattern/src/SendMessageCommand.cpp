#include <iostream>

#include "SendMessageCommand.h"

SendMessageCommand::SendMessageCommand(Publisher *publisher, const std::string & message)
    :   m_publisher(publisher),
        m_commandName("Send Message"),
        m_message(message)
{

}

std::string SendMessageCommand::GetCommandName() const
{
    return m_commandName;
}

void SendMessageCommand::Execute()
{
    if (!m_publisher)
    {
        std::cout << "Invalid publisher" << std::endl;
    }
    else
    {
        m_publisher->publish(m_message);
    }
}