#ifndef __BASE_VALIDATOR_H__
#define __BASE_VALIDATOR_H__

#include "StringValidator.h"
#include <string>

class BaseValidator : public StringValidator
{
public:
    BaseValidator();
    BaseValidator(std::string string_type);
    virtual ~BaseValidator();
    StringValidator *setNext(StringValidator *nextValidator) override;
    virtual std::string validate(std::string testString) override;
    void setStringType(std::string) override;

protected:
    std::string t_stringtype;
    StringValidator *t_next = nullptr;
};

#endif