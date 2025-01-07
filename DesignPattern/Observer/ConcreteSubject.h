#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "Subject.h"

class ConcreteSubject : public Subject {
public:
    void SetState(int state) {
        this->state = state;
    }
    int GetState() {
        return state;
    }

private:
    int state;
};

#endif