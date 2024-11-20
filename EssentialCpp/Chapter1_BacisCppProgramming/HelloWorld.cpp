#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    /* Hello World */
    cout << "Hello World!\n";

    /* Fabonacci Array */
    const int seqLength = 10;

    vector<int> FibonacciSeq;
    FibonacciSeq.push_back(1);
    FibonacciSeq.push_back(1);

    cout << "Fibonacci array: "
         << FibonacciSeq[0] << " "
         << FibonacciSeq[1] << " ";

    for (size_t i = 2; i < seqLength; i++) {
        int next = FibonacciSeq[i-1] + FibonacciSeq[i-2];
        FibonacciSeq.push_back(next);

        cout << FibonacciSeq[i] << " ";
    }

    return 0;
}