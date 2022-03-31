#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <string>

class Command
{
public:
    virtual ~Command();
    virtual void execute() = 0;
    virtual std::string getCommandName() const = 0;
};

#endif