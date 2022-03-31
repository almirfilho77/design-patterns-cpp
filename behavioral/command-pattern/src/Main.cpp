#include <iostream>
#include <string>
#include <vector>

#include "AddShapeCommand.h"
#include "Button.h"
#include "Canvas.h"
#include "ClearAllCommand.h"

std::string vectorToString(std::vector<std::string> v)
{
    std::string result = "";

    if (v.empty())
    {
        return "Empty";
    }

    for (int i=0; i < v.size(); i++)
    {
        result.append(v.at(i) + ", ");
    }
    return result;
}


int main(int argc, const char* argv[])
{
    Canvas *canvas = new Canvas;

    Button *addTriangleButton = new Button(new AddShapeCommand("triangle", canvas));
    Button *addSquareButton = new Button(new AddShapeCommand("square", canvas));
    Button *clearButton = new Button(new ClearAllCommand(canvas));

    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    addTriangleButton->click();
    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    addSquareButton->click();
    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    addSquareButton->click();
    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    addTriangleButton->click();
    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    clearButton->click();
    std::cout << "Current canvas state: " << vectorToString(canvas->getShapes()) << std::endl;

    delete canvas;
    return 0;
}