#include "AudioBook.h"

#ifdef AUDIOBOOK_TEST
int main() {
    AudioBook ab("The Great Gatsby", "F. Scott Fitzgerald", "Orson Welles");
    ab.print();

    return 0;
}
#endif