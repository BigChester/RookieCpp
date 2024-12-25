#ifndef __LIBMAT_H
#define __LIBMAT_H

#include <iostream>
using namespace std;

// #define LIBMAT_TEST

class LibMat {
    public:
        LibMat() {cout << "LibMat::LibMat() default constructor" << endl;};
        virtual ~LibMat() {cout << "LibMat::LibMat() destructor" << endl;};
        virtual void print() const  {cout << "LibMat::print() -- I am a LibMat object!" << endl;};
};


#endif