#ifndef __CANVAS_H__
#define __CANVAS_H__

#include <string>
#include <vector>

class Canvas
{
public:
    void addShape(const std::string & newShape);
    void clearAll();
    std::vector<std::string> getShapes() const;

private:
    std::vector<std::string> m_shapes;
};

#endif