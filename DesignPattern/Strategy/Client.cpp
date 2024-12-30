#include "Context.h"
#include "Strategy.h"

void Test() {
    std::cout << "=== Testing Strategy Pattern ===" << std::endl;

    // Test strategy A
    Strategy* strategyA = new StrategyA();
    Context* contextA = new Context(strategyA);
    std::cout << "Testing Strategy A: ";
    contextA->ContextInterface();
    delete strategyA;
    delete contextA;

    // Test strategy B 
    Strategy* strategyB = new StrategyB();
    Context* contextB = new Context(strategyB);
    std::cout << "Testing Strategy B: ";
    contextB->ContextInterface();
    delete strategyB;
    delete contextB;

    // Test strategy C
    Strategy* strategyC = new StrategyC();
    Context* contextC = new Context(strategyC);
    std::cout << "Testing Strategy C: ";
    contextC->ContextInterface();
    delete strategyC;
    delete contextC;

    std::cout << "\nExpected Output:" << std::endl;
    std::cout << "Testing Strategy A: Strategy A" << std::endl;
    std::cout << "Testing Strategy B: Strategy B" << std::endl; 
    std::cout << "Testing Strategy C: Strategy C" << std::endl;
}

int main() {
    Test();
    return 0;
}
