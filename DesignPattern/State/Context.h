#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {
public:
    Context(State* state) : state(state) {}
    void Request() {
        state->Handle(this);
    }
    void SetState(State* state) {
        this->state = state;
    }
    State* GetState() {
        return state;
    }

private:
    State* state;
};

#endif