#include "Prototype.h"
#include <iostream>

#ifdef TEST_PROTOTYPE
int main() {
    Prototype* prototype = new ConcretePrototype("1");
    Prototype* clone = prototype->clone();
    std::cout << "Prototype id: " << prototype->getId() << std::endl;
    std::cout << "Clone id: " << clone->getId() << std::endl;
    return 0;
}
#endif