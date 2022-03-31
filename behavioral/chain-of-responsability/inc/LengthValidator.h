#ifndef __LENGTH_VALIDATOR_H__
#define __LENGTH_VALIDATOR_H__

#include "BaseValidator.h"
#include <string>

class LengthValidator : public BaseValidator
{
public:
    LengthValidator();
    LengthValidator(int minLength);
    
    std::string validate(std::string testString) override;

private:
    int minLength;
};

#endif