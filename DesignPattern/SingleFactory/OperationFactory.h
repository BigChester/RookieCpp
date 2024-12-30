#ifndef __OPERATION_FACTORY_H__
#define __OPERATION_FACTORY_H__

#include <iostream>
#include <string>
#include "Operation.h"
class OperationFactory {
    public:
        static Operation* createOperation(std::string operate) {
            Operation* operation = nullptr;
            if (operate == "+") {
                operation = new OperationAdd();
            }
            else if (operate == "-") {
                operation = new OperationSub();
            }
            else if (operate == "*") {
                operation = new OperationMul();
            }
            else if (operate == "/") {
                operation = new OperationDiv();
            }

            return operation;
        }
};

#endif