#ifndef __AUDIOBOOK_H__
#define __AUDIOBOOK_H__

#include "Book.h"

using namespace std;

// #define AUDIOBOOK_TEST

class AudioBook : public Book {
    public:
        AudioBook(const std::string &title, const std::string &author, const std::string &narrator)
            : Book(title, author), _narrator(narrator) {
                std::cout << "AudioBook::AudioBook( " << _title
                << ", " << _author << ", " << _narrator << " ) constructor" << endl;
            }
        ~AudioBook() {
            cout << "AudioBook::~AudioBook() destructor" << endl;
        }
        virtual void print() const {
            cout << "AudioBook::print() -- I am an AudioBook object!" << endl;
            cout << "My title is: " << _title << endl;
            cout << "My author is: " << _author << endl;
            cout << "My narrator is: " << _narrator << endl;
        }

        const string &narrator() const {return _narrator;}

    protected:
        string _narrator;
};

#endif