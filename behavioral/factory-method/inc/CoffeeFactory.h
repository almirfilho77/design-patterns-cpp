#ifndef __COFFEE_FACTORY_H__
#define __COFFEE_FACTORY_H__

#include "Coffee.h"
#include "Cappuccino.h"
#include "Espresso.h"
#include "Factory.h"

class CoffeeFactory : public Factory
{
private:
    Coffee *m_coffee;
public:
    Product *make() override;
};

#endif