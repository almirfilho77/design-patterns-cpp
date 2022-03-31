#include <iostream>

#include "ClearAllCommand.h"

ClearAllCommand::ClearAllCommand(Canvas *canvas)
    :   m_Canvas(canvas),
        m_CommandName("Clear All")
{

}

void ClearAllCommand::execute()
{
    m_Canvas->clearAll();
}

std::string ClearAllCommand::getCommandName() const
{
    return m_CommandName;
}