#ifndef __PROGRAM_H__
#define __PROGRAM_H__

#include <string>

using namespace std;

class Program {
    private:
        string _program_name;
        string _version_stamp;
        int _version_number;
        int _tests_run;
        int _tests_passed;
};

#endif