#ifndef __SUB_SYSTEM_H__
#define __SUB_SYSTEM_H__

#include <iostream>

class SubSystemA {
public:
    void Operation1() { std::cout << "SubSystemA::Operation1" << std::endl; }
    void Operation2() { std::cout << "SubSystemA::Operation2" << std::endl; }
};

class SubSystemB {
public:
    void Operation1() { std::cout << "SubSystemB::Operation1" << std::endl; }
    void Operation2() { std::cout << "SubSystemB::Operation2" << std::endl; }
};

#endif // __SUB_SYSTEM_H__