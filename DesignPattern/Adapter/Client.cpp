#include "Adaptee.h"
#include "Adapter.h"

int main() {
    Target* target = new Adapter(new Adaptee());
    target->Request();
    return 0;
}