#ifndef __SIMPLE_FACTORY_H__
#define __SIMPLE_FACTORY_H__

#include "LeiFeng.h"
#include "Undergraduate.h"
#include "Volunteer.h"

class SimpleFactory {
public:
    static LeiFeng* CreateLeiFeng(std::string type) {
        if (type == "Undergraduate") {
            return new Undergraduate();
        } else if (type == "Volunteer") {
            return new Volunteer();
        }

        return nullptr;
    }
};

#endif