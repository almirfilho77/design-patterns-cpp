#include <iostream>
#include <string>

#include "Coffee.h"
#include "CoffeeFactory.h"
#include "Espresso.h"
#include "Factory.h"

int main(int argc, const char *argv[])
{
    Factory *coffeeMachine = new CoffeeFactory;
    Product *coffee;
    coffee = coffeeMachine->make();
    std::cout << "You asked for a(n) " << coffee->GetType() << std::endl;

    return 0;
}