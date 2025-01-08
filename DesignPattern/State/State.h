#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Context.h"

class State {
public:
    virtual void Handle(Context* context) = 0;
};

class ConcreteStateA : public State {
public:
    void Handle(Context* context) override {
        context->SetState(new ConcreteStateB());
    }
};

class ConcreteStateB : public State {
public:
    void Handle(Context* context) override {
        context->SetState(new ConcreteStateA());
    }
};

#endif