#ifndef __STACK_H
#define __STACK_H

#include <string>
#include <vector>
using namespace std;

class Stack {
    private:
        vector<string> _stack;
        size_t _maxSize;
    public:
        Stack(size_t maxSize): _maxSize(maxSize) {}
        bool push(const string &);
        bool pop(string &elem);
        bool peek(string &elem);
        bool empty();
        bool full();
};

#endif
