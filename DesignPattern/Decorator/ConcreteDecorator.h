#ifndef __CONCRETE_DECORATOR_H__
#define __CONCRETE_DECORATOR_H__

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
    public:
        ConcreteDecoratorA(Component* component) : Decorator(component) {}
        void Operation() override {
            Decorator::Operation();
            _addedState = "New State";
            std::cout << "ConcreteDecoratorA Operation" << std::endl;
        }

    private:
        std::string _addedState;
};

class ConcreteDecoratorB : public Decorator {
    public:
        ConcreteDecoratorB(Component* component) : Decorator(component) {}
        void Operation() override {
            Decorator::Operation();
            AddedBehavior();
            std::cout << "ConcreteDecoratorB Operation" << std::endl;
        }

    private:
        void AddedBehavior() {
            std::cout << "ConcreteDecoratorB AddedBehavior" << std::endl;
        }
};

#endif