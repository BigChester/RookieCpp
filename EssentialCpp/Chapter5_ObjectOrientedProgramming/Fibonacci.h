#ifndef __FIBONACCI_H__
#define __FIBONACCI_H__

#include "num_sequence.h"

// #define FIBONACCI_TEST

class Fibonacci : public num_sequence {
    public:
        Fibonacci(int len = 1, int beg_pos = 1)
            : _length(len), _beg_pos(beg_pos) {}
        virtual const char* what_am_i() const {return "Fibnacci";}
        virtual int elem(int pos) const;
        virtual ostream& print(ostream &os = cout) const;
        int length() const {return _length;}
        int beg_pos() const {return _beg_pos;}

    protected:
        virtual void gen_elems(int pos) const;
        static vector<int> _elems;
        int _length;
        int _beg_pos;
};

#endif