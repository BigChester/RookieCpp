#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <algorithm>
#include <iostream>
#include "Observer.h"

class Subject {
public:
    virtual void Attach(Observer* observer) {
        observers.push_back(observer);
    }
    virtual void Detach(Observer* observer) {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end()) {
            observers.erase(it);
        }
    }
    virtual void Notify() {
        for (auto& observer : observers) {
            observer->Update();
        }
    };

private:
    std::vector<Observer*> observers;
};

#endif