#include "LIFO_Stack.h"

bool LIFO_Stack::push(int value) {
    if (is_full())
        return false;

    _stack.push_back(value);
    _top++;
    return true;
}

bool LIFO_Stack::pop(int &value) {
    if (is_empty())
        return false;

    value = _stack[_top - 1];
    _top--;
    return true;
}

ostream& LIFO_Stack::print(ostream &os) const {
    os << "LIFO_Stack: ";
    for (int i = 0; i < _top; ++i)
        os << _stack[i] << " ";
    return os;
}
