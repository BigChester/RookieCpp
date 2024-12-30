#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

void Test() {
    std::cout << "=== Testing Decorator Pattern ===" << std::endl;

    // Create concrete component
    Component* component = new ConcreteComponent();
    std::cout << "Original component:" << std::endl;
    component->Operation();

    // Decorate with ConcreteDecoratorA
    Decorator* decoratorA = new ConcreteDecoratorA(component);
    std::cout << "\nWith Decorator A:" << std::endl; 
    decoratorA->Operation();

    // Decorate with ConcreteDecoratorB
    Decorator* decoratorB = new ConcreteDecoratorB(decoratorA);
    std::cout << "\nWith Decorator B:" << std::endl;
    decoratorB->Operation();

    // Clean up
    delete decoratorB;
    delete decoratorA;
    delete component;

    std::cout << "\nExpected Output:" << std::endl;
    std::cout << "Original component:" << std::endl;
    std::cout << "ConcreteComponent Operation" << std::endl;
    std::cout << "\nWith Decorator A:" << std::endl;
    std::cout << "ConcreteComponent Operation" << std::endl;
    std::cout << "ConcreteDecoratorA Operation" << std::endl;
    std::cout << "\nWith Decorator B:" << std::endl;
    std::cout << "ConcreteComponent Operation" << std::endl;
    std::cout << "ConcreteDecoratorA Operation" << std::endl;
    std::cout << "ConcreteDecoratorB AddedBehavior" << std::endl;
    std::cout << "ConcreteDecoratorB Operation" << std::endl;
}

int main() {
    Test();
    return 0;
}
