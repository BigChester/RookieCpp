#include "LIFO_Stack.h"

#ifdef PRACTICE_5_1_LIFO_STACK_TEST
int main() {
    LIFO_Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << stack.peek(0) << endl;
    cout << stack.peek(1) << endl;  
    cout << stack.peek(2) << endl;
    cout << stack.peek(3) << endl;
    stack.print();
    return 0;
}
#endif

