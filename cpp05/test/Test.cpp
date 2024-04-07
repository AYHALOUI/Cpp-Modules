#include "Test.hpp"

Test::Test()
{
}

Test::Test(int test)
{
    this->test = test;
}

Test& Test::operator = (const Test& copy)
{
    this->test = copy.test;
    return (*this);
}

std::ostream& operator<< (std::ostream& out, Test& test)
{
    out << test.getTest();
    return out;
}

int Test::getTest()
{
    return (this->test);
}