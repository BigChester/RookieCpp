#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include <iostream>
#include "Strategy.h"

class Context {
    public:
        Context(Strategy* strategy) : _strategy(strategy) {}
        void ContextInterface() {
            _strategy->AlgorithmInterface();
        }

    private:
        Strategy* _strategy;
};

#endif