#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

class Test
{
    private:
        int test;
    public:
    Test();
    /* orhtodox canonical form */
    Test(int test);
    Test& operator= (const Test& copy);

    int getTest();
};

std::ostream& operator<< (std::ostream& out, Test& test);

#endif