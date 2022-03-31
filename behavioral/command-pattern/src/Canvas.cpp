#include <iostream>

#include "Canvas.h"

void Canvas::addShape(const std::string & newShape)
{
    m_shapes.push_back(newShape);
}

void Canvas::clearAll()
{
    m_shapes.clear();
}

std::vector<std::string> Canvas::getShapes() const
{
    return m_shapes;
}