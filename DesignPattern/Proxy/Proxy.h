#ifndef __PROXY_H__
#define __PROXY_H__

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject {
    public:
        void Request() override {
            if (realSubject == nullptr) {
                realSubject = new RealSubject();
            }
            realSubject->Request();
        }
        
    private:
        RealSubject* realSubject;
};

#endif