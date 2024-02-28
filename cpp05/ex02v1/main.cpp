#include "Form.hpp"

int main()
{
    try
    {
        BureauCrat a("Amine", 1);
        Form b("Form1", false, 1, 1);
        a.signForm();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}


