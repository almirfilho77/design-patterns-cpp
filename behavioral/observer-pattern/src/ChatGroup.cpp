#include <algorithm>
#include <iostream>

#include "ChatGroup.h"

ChatGroup::ChatGroup(const std::string & groupName)
    :   m_groupName(groupName)
{

}

void ChatGroup::subscribe(Subscriber *subscriber)
{
    std::cout << subscriber->GetName() << " joined " << this->m_groupName << " group." << std::endl;
    this->m_subscribers.push_back(subscriber);
}

void ChatGroup::unsubscribe(Subscriber *subscriber)
{
    std::cout << subscriber->GetName() << " left." << std::endl;
    m_subscribers.erase(std::remove_if(m_subscribers.begin(), m_subscribers.end(), 
                                        [subscriber](Subscriber *s) { return s->GetName() == subscriber->GetName(); }),
                        m_subscribers.end());
}

void ChatGroup::publish(const std::string & message)
{
    for(auto subscriber : m_subscribers)
    {
        subscriber->Notify(this->m_groupName, message);
    }
}

std::string ChatGroup::GetName() const
{
    return m_groupName;
}