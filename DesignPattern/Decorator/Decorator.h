#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Component.h"

class Decorator : public Component {
    public:
        Decorator(Component* component) : _component(component) {}
        void Operation() override {
            if (_component) {
                _component->Operation();
            }
        }
        void SetComponent(Component* component) {
            _component = component;
        }
        Component* GetComponent() {
            return _component;
        }

    protected:
        Component* _component;
};

#endif