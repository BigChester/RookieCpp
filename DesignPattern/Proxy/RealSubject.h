#ifndef __REAL_SUBJECT_H__
#define __REAL_SUBJECT_H__

#include "Subject.h"
#include <iostream>

class RealSubject : public Subject {
    public:
        void Request() override {
            std::cout << "RealSubject: Handling request." << std::endl;
        }
};

#endif