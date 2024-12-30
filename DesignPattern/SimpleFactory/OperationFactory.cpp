#include "OperationFactory.h"

void Test() {
    std::cout << "=== Testing Operation Factory ===" << std::endl;

    // Test addition operation
    Operation* add = OperationFactory::createOperation("+");
    add->NumberA(10);
    add->NumberB(5);
    std::cout << "10 + 5 = " << add->GetResult() << std::endl;
    delete add;

    // Test subtraction operation
    Operation* sub = OperationFactory::createOperation("-"); 
    sub->NumberA(10);
    sub->NumberB(5);
    std::cout << "10 - 5 = " << sub->GetResult() << std::endl;
    delete sub;

    // Test multiplication operation
    Operation* mul = OperationFactory::createOperation("*");
    mul->NumberA(10);
    mul->NumberB(5);
    std::cout << "10 * 5 = " << mul->GetResult() << std::endl;
    delete mul;

    // Test division operation
    Operation* div = OperationFactory::createOperation("/");
    div->NumberA(10);
    div->NumberB(5);
    std::cout << "10 / 5 = " << div->GetResult() << std::endl;
    delete div;

    // Test division by zero
    Operation* divZero = OperationFactory::createOperation("/");
    divZero->NumberA(10);
    divZero->NumberB(0);
    try {
        std::cout << "10 / 0 = " << divZero->GetResult() << std::endl;
    }
    catch(const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    delete divZero;

    std::cout << "\nExpected Output:" << std::endl;
    std::cout << "10 + 5 = 15" << std::endl;
    std::cout << "10 - 5 = 5" << std::endl;
    std::cout << "10 * 5 = 50" << std::endl;
    std::cout << "10 / 5 = 2" << std::endl;
    std::cout << "Error: Divisor cannot be zero" << std::endl;
}

int main() {
    Test();
    return 0;
}


