#ifndef __ADD_SHAPE_COMMAND_H__
#define __ADD_SHAPE_COMMAND_H__

#include <string>

#include "Canvas.h"
#include "Command.h"

class AddShapeCommand : public Command
{
public:
    AddShapeCommand(const std::string & shapeName, Canvas *canvas);
    void execute() override;
    std::string getCommandName() const;

private:
    Canvas *m_Canvas;
    std::string m_ShapeName;
    std::string m_CommandName;
};

#endif