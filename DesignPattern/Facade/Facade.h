#ifndef __FACADE_H__
#define __FACADE_H__

#include "SubSystem.h"

// #define TEST_FACADE

class Facade {
public:
    Facade() : subSystemA(new SubSystemA()), subSystemB(new SubSystemB()) {}
    ~Facade() {
        delete subSystemA;
        delete subSystemB;
    }
    void Operation1() {
        std::cout << "Facade::Operation1" << std::endl;
        subSystemA->Operation1();
        subSystemB->Operation1();
    }
    void Operation2() {
        std::cout << "Facade::Operation2" << std::endl;
        subSystemA->Operation2();
        subSystemB->Operation2();
    }


private:
    SubSystemA* subSystemA;
    SubSystemB* subSystemB;
};

#endif // __FACADE_H__