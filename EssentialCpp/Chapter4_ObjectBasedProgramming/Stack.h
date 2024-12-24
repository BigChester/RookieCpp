#ifndef __STACK_H__
#define __STACK_H__

#include <string>
#include <vector>
using namespace std;

// #define PRACTICE4_1
// #define PRACTICE4_2

class Stack {
    private:
        vector<string> _stack;
        size_t _maxSize;
    public:
        Stack(size_t maxSize): _maxSize(maxSize) {}
        bool push(const string &);
        bool pop(string &elem);
        bool peek(string &elem) const;
        bool empty() const;
        bool full() const;
        bool find(const string &elem);
        size_t count(const string &elem) const;
};

#endif
