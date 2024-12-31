#ifndef __FACTORY_METHOD_H__
#define __FACTORY_METHOD_H__

#include "LeiFeng.h"
#include "Undergraduate.h"
#include "Volunteer.h"

class FactoryMethod {
public:
    virtual LeiFeng* CreateLeiFeng() = 0;
};

class UndergraduateFactory : public FactoryMethod {
public:
    LeiFeng* CreateLeiFeng() override {
        return new Undergraduate();
    }
};

class VolunteerFactory : public FactoryMethod {
public:
    LeiFeng* CreateLeiFeng() override {
        return new Volunteer();
    }
};

#endif