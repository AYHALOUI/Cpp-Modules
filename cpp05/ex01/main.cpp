 #include "Form.hpp"
#include <iostream>


int main()
{
    try
    {
        Bureaucrat a("aymene", 45);
        Form f("haloui", 60, 1);

        std::cout << "*---------------------------------*" << std::endl;
        std::cout << a;
        std::cout << f;
        std::cout << "*---------------------------------*" << std::endl;

        a.signForm(f);
    }
    catch(const std::exception& e)
    {
       std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}


