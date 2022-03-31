#include <algorithm>
#include <iostream>

#include "ChatUser.h"
#include "SendMessageCommand.h"

ChatUser::ChatUser(const std::string & userName)
    :   m_userName(userName)
{

}

std::string ChatUser::GetName() const
{
    return m_userName;
}

void ChatUser::JoinGroup(Publisher *publisher)
{
    // Add check to see if user is already inside the group
    m_groupList.push_back(publisher);
    publisher->subscribe(this);
}

void ChatUser::LeaveGroup(Publisher *publisher)
{
    m_groupList.erase(std::remove_if(m_groupList.begin(), m_groupList.end(), 
                                    [publisher](Publisher *p) { return publisher->GetName() == p->GetName(); }),
                                     m_groupList.end());
    publisher->unsubscribe(this);
}

void ChatUser::Notify(const std::string & publisherName, const std::string & message)
{
    std::cout << m_userName << " received a new message from " << publisherName << ": " << std::endl;
    std::cout << message << std::endl;
}

void ChatUser::SendMessage(const std::string & message, Publisher *publisher)
{
    // Check if publisher is in the list of publishers
    if (std::find_if(m_groupList.begin(), m_groupList.end(), [publisher](Publisher *p) { return publisher->GetName() == p->GetName(); }) != m_groupList.end())
    {
        std::cout << "Sending message from " << this->GetName() << " to group " << publisher->GetName() << std::endl;
        publisher->publish(message);
        // m_command = new SendMessageCommand(publisher, this->GetName() + ": " + message);
        // m_command->Execute();
    }
}