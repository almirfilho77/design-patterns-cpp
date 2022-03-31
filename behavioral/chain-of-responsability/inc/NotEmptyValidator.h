#ifndef __NOT_EMPTY_VALIDATOR_H__
#define __NOT_EMPTY_VALIDATOR_H__

#include "BaseValidator.h"
#include <string>

class NotEmptyValidator : public BaseValidator
{
public:
    NotEmptyValidator();
    
    std::string validate(std::string testString) override;
};

#endif