#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "Memento.h"
#include <iostream>

class Originator {
public:
    Originator() : _state("State 0") {}
    Memento CreateMemento() {
        return Memento(_state);
    };
    void SetMemento(Memento memento) {
        _state = memento.GetState();
    };
    void SetState(std::string state) {
        _state = state;
    };
    std::string GetState() const {
        return _state;
    };
    void Show() const {
        std::cout << "State: " << _state << std::endl;
    };

private:
    std::string _state;
};

#endif // ORIGINATOR_H