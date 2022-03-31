#include <iostream>
#include <string>

#include "BaseValidator.h"
#include "LengthValidator.h"
#include "NotEmptyValidator.h"
#include "RegexValidator.h"
#include "StringValidator.h"

int main(int argc, const char* argv[])
{
    StringValidator *emailValidator = new BaseValidator(std::string("email address"));
    StringValidator *passwordValidator = new BaseValidator(std::string("password"));

    emailValidator
        ->setNext(new NotEmptyValidator)
        ->setNext(new RegexValidator("email address", "^\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*$"));
    
    passwordValidator
        ->setNext(new NotEmptyValidator)
        ->setNext(new LengthValidator(8));

    std::cout << emailValidator->validate("") << passwordValidator->validate("") << std::endl;
    std::cout << emailValidator->validate("Snesnin10!") << passwordValidator->validate("123456") << std::endl;
    std::cout << emailValidator->validate("almir.filho77@gmail.com") << passwordValidator->validate("Aboba1234") << std::endl;

    delete emailValidator;
    delete passwordValidator;
}