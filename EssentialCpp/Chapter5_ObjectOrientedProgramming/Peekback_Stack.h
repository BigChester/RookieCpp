#ifndef __PEEKBACK_STACK_H__
#define __PEEKBACK_STACK_H__

#include "Stack.h"

#define PRACTICE_5_2_PEEKBACK_STACK_TEST

class Peekback_Stack : public Stack {
    public:
        bool push(int);
        bool pop(int &);
        int peek(int index) const;
        ostream& print(ostream &os = cout) const;
};

#endif