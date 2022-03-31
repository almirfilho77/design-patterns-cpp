#ifndef __STRING_VALIDATOR_H__
#define __STRING_VALIDATOR_H__

#include <string>

class StringValidator
{
public:
    virtual ~StringValidator();
    virtual StringValidator *setNext(StringValidator *nextValidator) = 0;
    virtual std::string validate(std::string) = 0;
    virtual void setStringType(std::string) = 0;
};

#endif