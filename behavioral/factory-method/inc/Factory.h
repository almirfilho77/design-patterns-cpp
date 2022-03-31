#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Product.h"

class Factory
{
protected:
    Product *product;
public:
    virtual Product *make() = 0;
};

#endif