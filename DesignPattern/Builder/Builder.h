#ifndef __BUILDER_H__
#define __BUILDER_H__

#include "Product.h"

class Builder {
public:
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual Product* GetResult() = 0;
};

#endif // __BUILDER_H__