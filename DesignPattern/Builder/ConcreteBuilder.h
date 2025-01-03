#ifndef __CONCRETE_BUILDER_H__
#define __CONCRETE_BUILDER_H__

#include "Builder.h"

class ConcreteBuilder1 : public Builder {
public:
    ConcreteBuilder1() : product(new Product()) {}
    ~ConcreteBuilder1() {
        delete product;
    }

    void BuildPartA() override {
        product->Add("PartA");
    }
    void BuildPartB() override {
        product->Add("PartB");
    }
    Product* GetResult() override {
        return product;
    }

private:
    Product* product;
};

class ConcreteBuilder2 : public Builder {
public:
    ConcreteBuilder2() : product(new Product()) {}
    ~ConcreteBuilder2() {
        delete product;
    }

    void BuildPartA() override {
        product->Add("PartX");
    }
    void BuildPartB() override {
        product->Add("PartY");
    }
    Product* GetResult() override {
        return product;
    }

private:
    Product* product;
};

#endif // __CONCRETE_BUILDER_H__