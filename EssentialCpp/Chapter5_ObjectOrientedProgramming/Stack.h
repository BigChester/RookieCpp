#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <vector>

using namespace std;

class Stack {
    public:
        Stack(int size = 100) : _size(size), _top(0) {}
        virtual ~Stack() {}

        virtual bool push(int) = 0;
        virtual bool pop(int &) = 0;
        virtual int size() const { return _size; }
        virtual bool is_empty() const { return _top == 0; }
        virtual bool is_full() const { return _top == _size; }
        virtual int peek(int index) const = 0;
        virtual ostream& print(ostream &os = cout) const = 0;

    protected:
        vector<int> _stack;
        int _top;
        int _size;
};

#endif