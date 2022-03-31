#ifndef __CLEAR_ALL_COMMAND_H__
#define __CLEAR_ALL_COMMAND_H__

#include "Canvas.h"
#include "Command.h"

class ClearAllCommand : public Command
{
public:
    ClearAllCommand(Canvas *canvas);
    void execute() override;
    std::string getCommandName() const;

private:
    Canvas *m_Canvas;
    std::string m_CommandName;
};

#endif