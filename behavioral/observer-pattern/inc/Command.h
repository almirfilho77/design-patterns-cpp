#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <string>

class Command
{
public:
    virtual ~Command();
    virtual void Execute() = 0;
    virtual std::string GetCommandName() const = 0;
};

#endif