#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

#include <string>

#define TEST_PROTOTYPE

/**
 * @brief Prototype is an abstract class that defines the clone method.
 * @details The clone method is used to create a deep copy of the object.
 */
class Prototype {
public:
    Prototype(std::string id) : id(id) {}
    virtual ~Prototype() {}

    std::string getId() const { return this->id; }
    virtual Prototype* clone() const = 0;

protected:
    std::string id;
};

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype(std::string id) : Prototype(id) {}
    ~ConcretePrototype() {}

    Prototype* clone() const override { return new ConcretePrototype(*this); }
};

#endif