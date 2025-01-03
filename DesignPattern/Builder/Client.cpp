#include "Director.h"
#include "ConcreteBuilder.h"

int main() {
    // 测试 ConcreteBuilder1
    Director director;
    Builder* builder1 = new ConcreteBuilder1();
    director.Construct(builder1);
    Product* product1 = builder1->GetResult();
    product1->Show();

    // 测试 ConcreteBuilder2 
    Builder* builder2 = new ConcreteBuilder2();
    director.Construct(builder2);
    Product* product2 = builder2->GetResult();
    product2->Show();

    delete builder1;
    delete builder2;
    return 0;
}