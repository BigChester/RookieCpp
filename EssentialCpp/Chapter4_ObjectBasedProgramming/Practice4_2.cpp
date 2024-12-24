#include <iostream>
#include "Stack.h"

#ifdef PRACTICE4_2
int main(void) {
    size_t capacity = 10;
    Stack stack(capacity);

    /* Test1: Stack Find */
    cout << "Testing find operation..." << endl;
    stack.push("Hello");
    stack.push("World");
    stack.push("Hello");
    stack.push("World");
    if (stack.find("Hello")) {
        cout << "Find works correctly: Hello" << endl;
    } else {
        cout << "Error: Find should return true." << endl;
    }

    if (stack.find("World")) {
        cout << "Find works correctly: World" << endl;
    } else {
        cout << "Error: Find should return true." << endl;
    }

    if (!stack.find("C++")) {
        cout << "Find works correctly: C++" << endl;
    } else {
        cout << "Error: Find should return false." << endl;
    }

    /* Test2: Stack Count */
    cout << "\nTesting count operation..." << endl;
    stack.push("Hello");
    if (stack.count("Hello") == 3) {
        cout << "Count works correctly: Hello" << endl;
    } else {
        cout << "Error: Count should return 3." << endl;
    }

    stack.push("Hello");
    if (stack.count("Hello") == 4) {
        cout << "Count works correctly: Hello" << endl;
    } else {
        cout << "Error: Count should return 4." << endl;
    }

    return 0;
}
#endif