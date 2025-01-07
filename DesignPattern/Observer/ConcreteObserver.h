#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver : public Observer {
public:
    ConcreteObserver(std::string name, ConcreteSubject* subject) : name(name), subject(subject) {}
    void Update() override {
        observerState = subject->GetState();
        std::cout << "Observer " << name << " has updated with state " << observerState << std::endl;
    };
    ConcreteSubject* GetConcreteSubject() {
        return subject;
    }
    void SetConcreteSubject(ConcreteSubject* subject) {
        this->subject = subject;
    }

private:
    std::string name;
    ConcreteSubject* subject;
    int observerState;
};

#endif