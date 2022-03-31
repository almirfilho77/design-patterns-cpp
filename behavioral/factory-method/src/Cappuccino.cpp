#include <iostream>

#include "Cappuccino.h"

Cappuccino::Cappuccino()
{
    t_productType = std::string("Coffee");
    t_coffeeType = std::string("Espresso");
    std::cout << std::endl << "Making a cup of Cappuccino" << std::endl;
    std::cout << "Grind and brew one scoop of espresso beans." << std::endl;
    std::cout << "Heat and foam milk." << std::endl;
}

std::string Cappuccino::GetType() const
{
    return t_productType + ":" + t_coffeeType;
}