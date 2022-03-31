#include <iostream>

#include "AddShapeCommand.h"

AddShapeCommand::AddShapeCommand(const std::string & shapeName, Canvas *canvas)
    :   m_Canvas(canvas),
        m_ShapeName(shapeName),
        m_CommandName("Add " + m_ShapeName)
{

}

void AddShapeCommand::execute()
{
    m_Canvas->addShape(m_ShapeName);
}

std::string AddShapeCommand::getCommandName() const
{
    return m_CommandName;
}