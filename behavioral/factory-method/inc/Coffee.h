#ifndef __COFFEE_H_
#define __COFFEE_H_

#include <string>

#include "Product.h"

class Coffee : public Product
{
protected:
    std::string t_coffeeType;
public:
    virtual std::string GetType() const = 0;
};

#endif