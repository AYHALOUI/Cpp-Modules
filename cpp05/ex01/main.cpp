 #include "Form.hpp"
#include <iostream>


int main()
{
    try
    {
        Bureaucrat a("aymene", 1);
        Form f("haloui", 2, 1);

        std::cout << a;
        std::cout << f;

        f.beSigned(a);
        a.signForm(f);
    }
    catch(const std::exception& e)
    {
       std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}


