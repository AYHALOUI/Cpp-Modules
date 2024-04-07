#include "Test.hpp"

int main()
{
    Test test(42);
    Test test2(21);

    //test = test2;
    test.operator=(test2);

    std::cout << test;
    return 0;
}