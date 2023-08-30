#include "Fixed.hpp"

#include <string>
#include <iostream>

class Test
{
    public:
        /************************************************************/
        // int x;
        // Test():x(0){
        //     std::cout << "default constuctor called " << std::endl;
        // }
        // Test(int x): x(x)
        // {
        //     std::cout << "constuctor parametred called " << std::endl;
        // }
        // Test(const Test& copy)
        // {
        //     std::cout << "copy constuctor called " << std::endl;
        // }

        // Test &operator = (const Test &test)
        // {
        //     std::cout << "Assigment operator called" << std::endl;
        //     return *this;
        // }
        /************************************************************/
        Test()
        {
            std::cout << "default constructor called " << std::endl;
        }
        Test(const Test& t)
        {
            std::cout << "Copy constructor called " << std::endl;
        }
 
        Test& operator=(const Test& t)
        {
            std::cout << "Assignment operator called " << std::endl;
            return *this;
        }
};

#include <string>

std::string fakeBin(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        d
    }
    
}
int main()
{
    std::cout << "***********\n";
    Fixed a;
    std::cout << "***********\n";
    Fixed const b( 10 );
    std::cout << "***********\n";
    Fixed const c( 42.42f );
    std::cout << "***********\n";
    Fixed const d( b );
    
    std::cout << "***********\n";
    a = Fixed( 1234.4321f );
    std::cout << "***********\n";
    return 0;
}