#ifndef __ESPRESSO_H_
#define __ESPRESSO_H_

#include <string>

#include "Coffee.h"

class Espresso : public Coffee
{
public:
    Espresso();
    std::string GetType() const override;
};

#endif