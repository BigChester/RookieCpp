#ifndef __LIFO_STACK_H__
#define __LIFO_STACK_H__

#include "Stack.h"

#define PRACTICE_5_1_LIFO_STACK_TEST

class LIFO_Stack : public Stack {
    public:
        bool push(int);
        bool pop(int &);
        int peek(int index) const { return -1; }
        ostream& print(ostream &os = cout) const;
};

#endif