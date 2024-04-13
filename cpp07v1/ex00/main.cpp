#include "whatever.hpp"


// int main()
// {

//     int a = 10;
//     int b = 20;

//     std::cout << "---- Test for function Swap ----" << std::endl;
//     std::cout << "---- after swaping the values ----" << std::endl;

//     swap(a,b);
//     std::cout <<"a: " << a << std::endl;
//     std::cout <<"b: " << b << std::endl;

//     std::cout << "---- Test for functions Min and Max ----" << std::endl;
//     std::cout << "Min is: " << min (a, b) << std::endl;
//     std::cout << "Max is: " << max (a, b) << std::endl;
//     return 0;
// } 

int main( void ) {
    
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}