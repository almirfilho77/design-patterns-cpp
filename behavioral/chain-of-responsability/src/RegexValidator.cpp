#include <iostream>

#include "RegexValidator.h"

RegexValidator::RegexValidator(std::string patternName, std::string regexString)
    :   patternName(patternName),
        regexString(regexString)
{

}

std::string RegexValidator::validate(std::string testString)
{
    std::cout << "Checking regex match..." << std::endl;

    if (!std::regex_match(testString, std::regex(regexString)))
    {
        return "The " + t_stringtype + " entered does not match the proper format for a " + patternName + ".\n";
    }

    return BaseValidator::validate(testString);
}