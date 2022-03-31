#ifndef __REGEX_VALIDATOR_H__
#define __REGEX_VALIDATOR_H__

#include "BaseValidator.h"

#include <regex>
#include <string>

class RegexValidator : public BaseValidator
{
public:
    RegexValidator(std::string patternName, std::string regexString);
    
    std::string validate(std::string testString) override;

private:
    std::string patternName;
    std::string regexString;
};

#endif