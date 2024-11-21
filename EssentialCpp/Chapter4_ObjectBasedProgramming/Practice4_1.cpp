#include <iostream>
#include "Stack.h"
using namespace std;

int main(void) {
    size_t capacity = 10;
    Stack stack(capacity);

    /* Test1: Stack Empty */
    cout << "Testing empty stack..." << endl;
    if (stack.empty()) {
        cout << "Stack is empty as expected." << endl;
    } else {
        cout << "Error: Stack should be empty." << endl;
    }

    string elem;
    if (!stack.pop(elem)) {
        cout << "Pop on empty stack correctly returns false." << endl;
    } else {
        cout << "Error: Pop on empty stack should return false." << endl;
    }

    if (!stack.peek(elem)) {
        cout << "Peek on empty stack correctly returns false." << endl;
    } else {
        cout << "Error: Peek on empty stack should return false." << endl;
    }

    /* Test2: Stack Push */
    cout << "\nTesting push operation..." << endl;
    stack.push("Hello");
    stack.push("World");

    if (!stack.empty()) {
        cout << "Stack is not empty after pushes as expected." << endl;
    } else {
        cout << "Error: Stack should not be empty after pushes." << endl;
    }

    if (stack.peek(elem)) {
        cout << "Peek after push works correctly: " << elem << endl;
    } else {
        cout << "Error: Peek should return true after pushes." << endl;
    }

    /* Test3: Stack Pop */
    cout << "\nTesting pop operation..." << endl;
    if (stack.pop(elem)) {
        cout << "Pop works correctly: " << elem << endl;
    } else {
        cout << "Error: Pop should return true." << endl;
    }

    if (stack.pop(elem)) {
        cout << "Pop works correctly: " << elem << endl;
    } else {
        cout << "Error: Pop should return true." << endl;
    }

    if (stack.empty()) {
        cout << "Stack is empty after pops as expected." << endl;
    } else {
        cout << "Error: Stack should be empty after pops." << endl;
    }

    /* Test4: Stack Full */
    cout << "\nTesting full operation..." << endl;
    for (size_t i = 0; i < capacity; ++i) {
        if (!stack.full()) {
            stack.push("Item " + to_string(i));
        }
    }

    if (stack.full()) {
        cout << "Stack is full as expected." << endl;
    } else {
        cout << "Error: Stack should be full after reaching capacity." << endl;
        cout << "stack start:{ ";
        while (!stack.empty()) {
            string dropString;
            stack.pop(dropString);
            cout << dropString << ' ';
        }
        cout << "} stack end" << endl;
    }

    if (!stack.push("Overflow")) {
        cout << "Push on full stack correctly returns false." << endl;
    } else {
        cout << "Error: Push on full stack should return false." << endl;
    }

    return 0;
}
