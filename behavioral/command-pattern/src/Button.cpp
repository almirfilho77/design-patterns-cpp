#include <iostream>

#include "Button.h"

Button::Button(Command *command)
    :   m_command(command)
{

}

void Button::click()
{
    std::cout << "Clicked " << m_command->getCommandName() << " button" << std::endl;
    m_command->execute();
}