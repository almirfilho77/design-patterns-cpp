#ifndef __CHAT_GROUP_H__
#define __CHAT_GROUP_H__

#include <string>
#include <vector>

#include "Publisher.h"
#include "Subscriber.h"

class ChatGroup : public Publisher
{
private:
    std::string m_groupName;
    std::vector<Subscriber *> m_subscribers;

public:
    ChatGroup(const std::string & groupName);
    void subscribe(Subscriber *subscriber) override;
    void unsubscribe(Subscriber *subscriber) override;
    void publish(const std::string & message) override;
    std::string GetName() const override;
};

#endif