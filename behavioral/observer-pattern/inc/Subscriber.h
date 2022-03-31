#ifndef __SUBSCRIBER_H__
#define __SUBSCRIBER_H__

#include <string>

class Subscriber
{
public:
    virtual void Notify(const std::string & publisherName, const std::string & message) = 0;
    virtual std::string GetName() const = 0;
};

#endif