#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "Builder.h"

class Director {
public:
    void Construct(Builder* builder) {
        builder->BuildPartA();
        builder->BuildPartB();
    }
};

#endif // __DIRECTOR_H__