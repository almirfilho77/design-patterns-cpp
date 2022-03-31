#include <iostream>

#include "CoffeeFactory.h"

Product *CoffeeFactory::make()
{
    int choice;

    std::cout << "Choose your coffee:" << std::endl;
    std::cout << "1. Espresso" << std::endl;
    std::cout << "2. Cappuccino" << std::endl;
    std::cout << "Selection: ";

    std::cin >> choice;

    switch (choice)
    {
    case 1:
        return new Espresso;
    
    case 2:
        return new Cappuccino;
    
    default:
        std::cout << "Invalid choice!" << std::endl;
        return nullptr;
    }
}