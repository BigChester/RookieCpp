#include "Fibonacci.h"

vector<int> Fibonacci::_elems;

int Fibonacci::elem(int pos) const {
    if (!check_integrity(pos, _elems.size()))
        return 0;

    if (pos > _elems.size())
        Fibonacci::gen_elems(pos);

    return _elems[pos - 1];
}

void Fibonacci::gen_elems(int pos) const {
    if (_elems.empty()) {
        _elems.push_back(1);
        _elems.push_back(1);
    }

    if (pos >= _elems.size()) {
        int ix = _elems.size();
        int n_2 = _elems[ix - 2];
        int n_1 = _elems[ix - 1];

        for (; ix <= pos; ++ix) {
            int elem = n_2 + n_1;
            _elems.push_back(elem);
            n_2 = n_1;
            n_1 = elem;
        }
    }
}

ostream& Fibonacci::print(ostream &os) const {
    int elem_pos = _beg_pos - 1;
    int end_pos = elem_pos + _length;

    if (end_pos > _elems.size())
        Fibonacci::gen_elems(end_pos);

    while (elem_pos < end_pos)
        os << _elems[elem_pos++] << ' ';
    return os;
}

inline void display(const num_sequence &ns, int pos, ostream &os = cout) {
    os << "The element at position "    << pos
       << " for the "                   << ns.what_am_i()
       << " sequence is "               << ns.elem(pos)
       << endl;
}

#ifdef FIBONACCI_TEST
int main() {
    Fibonacci fib;
    cout << "fib: beginning at element 1 for 1 element: ";
    fib.print(cout);
    cout << endl;

    Fibonacci fib2(16);
    cout << "fib2: beginning at element 1 for 16 elements: ";
    fib2.print(cout);
    cout << endl;

    Fibonacci fib3(8, 3);
    cout << "fib3: beginning at element 3 for 8 elements: ";
    fib3.print(cout);
    cout << endl;

    display(fib3, 8);

    return 0;
}
#endif