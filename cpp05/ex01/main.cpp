 #include "Form.hpp"
#include <iostream>


int main()
{
    try
    {
        std::cout << "*------------- Constructors --------------*" << std::endl;
        Bureaucrat a("aymene", 40);
        Form f("haloui", 60, 150);

        std::cout << "*---------------------------------*" << std::endl;
        std::cout << a;
        std::cout << f;
        std::cout << "*---------------------------------*" << std::endl;

        std::cout << "*------------- Test Functions --------------*" << std::endl;
        f.beSigned(a);
        a.signForm(f);

        std::cout << "*------------- Destructors --------------*" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}


