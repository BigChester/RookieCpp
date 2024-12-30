#ifndef __OPERATION_H__
#define __OPERATION_H__

#include <iostream>
#include <string>

class Operation {
    public:
        double NumberA() {
            return _numberA;
        }

        double NumberB() {
            return _numberB;
        }

        void NumberA(double numberA) {
            _numberA = numberA;
        }

        void NumberB(double numberB) {
            _numberB = numberB;
        }

        virtual double GetResult() {
            return 0;
        }

    private:
        double _numberA = 0;
        double _numberB = 0;
};

class OperationAdd : public Operation {
    public:
        double GetResult() override {
            return NumberA() + NumberB();
        }
};

class OperationSub : public Operation {
    public:
        double GetResult() override {
            return NumberA() - NumberB();
        }
};

class OperationMul : public Operation {
    public:
        double GetResult() override {
            return NumberA() * NumberB();
        }
};

class OperationDiv : public Operation {
    public:
        double GetResult() override {
            if (NumberB() == 0) {
                throw std::runtime_error("Divisor cannot be zero");
            }
            return NumberA() / NumberB();
        }
};

#endif