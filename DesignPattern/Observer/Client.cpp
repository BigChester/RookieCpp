#include "ConcreteObserver.h"

int main() {
    ConcreteSubject* subject = new ConcreteSubject();
    subject->Attach(new ConcreteObserver("Observer 1", subject));
    subject->Attach(new ConcreteObserver("Observer 2", subject));
    subject->SetState(1);
    subject->Notify();
    
    return 0;
}