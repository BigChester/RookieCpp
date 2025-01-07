#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer {
public:
    virtual void Update() = 0;
};

#endif