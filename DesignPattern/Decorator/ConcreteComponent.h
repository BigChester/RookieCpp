#ifndef __CONCRETE_COMPONENT_H__
#define __CONCRETE_COMPONENT_H__

#include "Component.h"

class ConcreteComponent : public Component {
    public:
        void Operation() override {
            std::cout << "ConcreteComponent Operation" << std::endl;
        }
};

#endif