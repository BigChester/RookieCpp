#include <iostream>
#include <vector>
using namespace std;

template <typename elemType>
static void displayMsg(const string &msg, const vector<elemType> &vec);

int main(void)  {
    int arr[] = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr+n);

    string msg = "Fabonacci Array: ";

    displayMsg(msg, vec);

    return 0;
}

template <typename elemType>
static void displayMsg(const string &msg,
                const vector<elemType> &vec) {
    cout << msg;
    for (size_t i = 0; i < vec.size(); i++) {
        elemType t = vec[i];
        cout << t << ' ';
    }
}