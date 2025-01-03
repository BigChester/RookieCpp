#include "Facade.h"

#ifdef TEST_FACADE
int main() {
    std::cout << "=== Testing Facade Pattern ===" << std::endl;
    
    std::cout << "\nCreating facade object..." << std::endl;
    Facade facade;
    
    std::cout << "\nTesting Operation1():" << std::endl;
    facade.Operation1();
    
    std::cout << "\nTesting Operation2():" << std::endl; 
    facade.Operation2();

    std::cout << "\n=== Facade Pattern Test Complete ===" << std::endl;
    return 0;
}
#endif