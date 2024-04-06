 #include "Form.hpp"
#include <iostream>


int main()
{
    try
    {
        BureauCrat a("aymene", 1);
        Form f("Form", 2, 1);

        std::cout << a;
        std::cout << f;

        f.beSigned(a);
        a.signForm();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}


