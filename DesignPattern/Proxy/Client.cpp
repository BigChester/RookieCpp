#include "Proxy.h"

int main() {
    std::cout << "Proxy pattern demo started." << std::endl;
    Subject* subject = new Proxy();
    subject->Request();
    delete subject;
    std::cout << "Proxy pattern demo completed." << std::endl;
    return 0;
}
