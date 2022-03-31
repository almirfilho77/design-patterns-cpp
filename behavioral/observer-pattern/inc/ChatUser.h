#ifndef __CHAT_USER_H__
#define __CHAT_USER_H__

#include <string>
#include <vector>

#include "Command.h"
#include "Publisher.h"
#include "Subscriber.h"

class ChatUser : public Subscriber
{
private:
    std::string m_userName;
    Command *m_command = nullptr;
    std::vector<Publisher *> m_groupList;

public:
    ChatUser(const std::string & userName);
    std::string GetName() const override;
    void JoinGroup(Publisher *publisher);
    void LeaveGroup(Publisher *publisher);
    void Notify(const std::string & publisherName, const std::string & message) override;
    void SendMessage(const std::string & message, Publisher *publisher);
};

#endif