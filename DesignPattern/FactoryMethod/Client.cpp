#include "SimpleFactory.h"
#include "FactoryMethod.h"

int main() {
    LeiFeng* studentA = SimpleFactory::CreateLeiFeng("Undergraduate");
    LeiFeng* studentB = SimpleFactory::CreateLeiFeng("Volunteer");
    studentA->Sweep();
    studentA->Wash();
    studentA->BuyRice();
    studentB->Sweep();
    studentB->Wash();
    studentB->BuyRice();
    delete studentA;
    delete studentB;

    FactoryMethod* factoryA = new UndergraduateFactory();
    LeiFeng* studentC = factoryA->CreateLeiFeng();
    studentC->Sweep();
    studentC->Wash();
    studentC->BuyRice();
    delete studentC;
    delete factoryA;
    return 0;
}