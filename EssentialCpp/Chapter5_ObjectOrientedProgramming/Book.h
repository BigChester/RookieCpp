#ifndef __BOOK_H__
#define __BOOK_H__

#include <string>
#include "LibMat.h"

using namespace std;

class Book : public LibMat {
    public:
        Book(const string &title, const string &author) 
            : _title(title), _author(author) {
                cout << "Book::Book( " << _title
                << ", " << _author << " ) constructor" << endl;
            }
        virtual ~Book() {cout << "Book::Book() destructor" << endl;}
        virtual void print() const {
            cout << "Book::print() -- I am a Book object!" << endl;
            cout << "My title is: " << _title << endl;
            cout << "My author is: " << _author << endl;
        }

        const string &title() const {return _title;}
        const string &author() const {return _author;}

    protected:
        string _title;
        string _author;
};

#endif