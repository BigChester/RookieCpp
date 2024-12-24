#include <algorithm>
#include "Stack.h"

inline bool
Stack::empty() {
    return _stack.empty();
}

inline bool
Stack::full() {
    return (_stack.size() >= _maxSize);
}

bool
Stack::pop(string &elem) {
    if (empty()) {
        return false;
    }

    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool
Stack::push(const string &elem) {
    if (full()) {
        return false;
    }

    _stack.push_back(elem);
    return true;
}

bool
Stack::peek(string &elem) {
    if (empty()) {
        return false;
    }

    elem = _stack.back();
    return true;
}

bool
Stack::find(const string &elem) {
    vector<string>::iterator end_it = _stack.end();
    return std::find(_stack.begin(), end_it, elem) != end_it;
}

size_t
Stack::count(const string &elem) {
    return ::count(_stack.begin(), _stack.end(), elem);
}
