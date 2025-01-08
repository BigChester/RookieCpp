#include "State.h"

int main() {
    /* Initial state: ConcreteStateA */
    Context* context = new Context(new ConcreteStateA());
    std::cout << "Initial state: ConcreteStateA" << std::endl;

    /* After first request: ConcreteStateB */
    context->Request();
    std::cout << "After first request: ConcreteStateB" << std::endl;

    /* After second request: ConcreteStateA */
    context->Request(); 
    std::cout << "After second request: ConcreteStateA" << std::endl;

    /* After third request: ConcreteStateB */
    context->Request();
    std::cout << "After third request: ConcreteStateB" << std::endl;

    /* Clean up memory */
    delete context;
    return 0;
}