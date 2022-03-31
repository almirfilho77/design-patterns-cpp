#include <iostream>
#include "NotEmptyValidator.h"

NotEmptyValidator::NotEmptyValidator()
{

}

std::string NotEmptyValidator::validate(std::string testString)
{
    std::cout << "Checking if " + t_stringtype + " is empty..." << std::endl;

    if (testString.empty())
    {
        return "The " + t_stringtype + " is empty. Please enter a " + t_stringtype + ".\n";
    }
    
    return BaseValidator::validate(testString);
}