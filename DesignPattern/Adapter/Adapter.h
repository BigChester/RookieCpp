#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target {
public:
    Adapter(Adaptee* adaptee) : _adaptee(adaptee) {}
    void Request() override {
        _adaptee->SpecificRequest();
    }

private:
    Adaptee* _adaptee;
};

#endif // ADAPTER_H