#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

class Caretaker {
public:
    Caretaker() : _memento(Memento("")) {}
    void SetMemento(Memento memento) {
        _memento = memento;
    };
    Memento GetMemento() const {
        return _memento;
    };

private:
    Memento _memento;
};

#endif // CARETAKER_H