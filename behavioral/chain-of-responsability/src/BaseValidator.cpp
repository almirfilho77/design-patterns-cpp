#include <iostream>

#include "BaseValidator.h"

BaseValidator::BaseValidator()
    :   t_stringtype("String")
{

}

BaseValidator::BaseValidator(std::string string_type)
    :   t_stringtype(string_type)
{

}

BaseValidator::~BaseValidator()
{
    delete t_next;
}

StringValidator *BaseValidator::setNext(StringValidator *nextValidator)
{
    nextValidator->setStringType(t_stringtype);
    t_next = nextValidator;
    return nextValidator;
}

std::string BaseValidator::validate(std::string testString)
{
    if (this->t_next)
    {
        return this->t_next->validate(testString);
    }

    return "Success!\n";
}

void BaseValidator::setStringType(std::string string_type)
{
    t_stringtype = string_type;
}