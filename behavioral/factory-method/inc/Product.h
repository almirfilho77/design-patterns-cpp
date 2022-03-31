#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
protected:
    std::string t_productType;
public:
    virtual std::string GetType() const = 0;
};

#endif