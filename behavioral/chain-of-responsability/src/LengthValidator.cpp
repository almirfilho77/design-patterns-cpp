#include <iostream>
#include <string>

#include "LengthValidator.h"

LengthValidator::LengthValidator()
    :   minLength(8)
{

}

LengthValidator::LengthValidator(int minLength)
    :   minLength(minLength)
{

}

std::string LengthValidator::validate(std::string testString)
{
    std::cout << "Testing if the length of the " + t_stringtype + " is greater than " << minLength << "characters long..." << std::endl;
    if (testString.length() < minLength)
    {
        return "The " + t_stringtype + " is too small! Please enter a " + t_stringtype + " longer than " + std::to_string(minLength) + " characters.\n";
    }

    return BaseValidator::validate(testString);
}