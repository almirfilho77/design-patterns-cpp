#ifndef __PUBLISHER_H__
#define __PUBLISHER_H__

#include <string>

#include "Subscriber.h"

class Publisher
{
public:
    virtual void subscribe(Subscriber *subscriber) = 0;
    virtual void unsubscribe(Subscriber *subscriber) = 0;
    virtual void publish(const std::string & message) = 0;
    virtual std::string GetName() const = 0;
};

#endif