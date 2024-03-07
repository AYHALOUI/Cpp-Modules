#include "whatever.hpp"




int main()
{

    int a = 10;
    int b = 20;

    std::cout << "---- Test for function Swap ----" << std::endl;
    std::cout << "---- after swaping the values ----" << std::endl;
    swap(a,b);
    std::cout <<"a: " << a << std::endl;
    std::cout <<"b: " << b << std::endl;
    std::cout << "---- Test for functions Min and Max ----" << std::endl;
    std::cout << "Min is: " << min (a, b) << std::endl;
    std::cout << "Max is: " << max (a, b) << std::endl;
    return 0;
} 