#include <iostream>

#include "Espresso.h"

Espresso::Espresso()
{
    t_productType = std::string("Coffee");
    t_coffeeType = std::string("Espresso");
    std::cout << std::endl << "Making a cup of Espresso" << std::endl;
    std::cout << "Grind and brew one scoop of espresso beans." << std::endl;
}

std::string Espresso::GetType() const
{
    return t_productType + ":" + t_coffeeType;
}