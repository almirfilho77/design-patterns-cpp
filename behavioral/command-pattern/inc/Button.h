#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "Command.h"

class Button 
{
public:
    Button(Command *command);
    void click();

private:
    Command *m_command;
};

#endif