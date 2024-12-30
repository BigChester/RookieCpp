#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>

class Strategy {
    public:
        virtual void AlgorithmInterface() = 0;
};

class StrategyA : public Strategy {
    public:
        void AlgorithmInterface() override {
            std::cout << "Strategy A" << std::endl;
        }
};

class StrategyB : public Strategy {
    public:
        void AlgorithmInterface() override {
            std::cout << "Strategy B" << std::endl;
        }
};

class StrategyC : public Strategy {
    public:
        void AlgorithmInterface() override {
            std::cout << "Strategy C" << std::endl;
        }
};

#endif