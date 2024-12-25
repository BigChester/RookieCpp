#include "LibMat.h"

void print(const LibMat &mat) {
    cout << "in global print(): about to print mat.print()" << endl;
    mat.print();
}

#ifdef LIBMAT_TEST
int main() {
    cout << "Creating a LibMat object to print" << endl;
    LibMat mat;
    print(mat);

    return 0;
}
#endif