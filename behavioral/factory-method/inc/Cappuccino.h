#ifndef __CAPPUCCINO_H_
#define __CAPPUCCINO_H_

#include <string>

#include "Coffee.h"

class Cappuccino : public Coffee
{
public:
    Cappuccino();
    std::string GetType() const override;
};

#endif