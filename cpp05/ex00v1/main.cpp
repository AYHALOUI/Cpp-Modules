#include "BureauCrat.hpp"

int main()
{

    float f = 2.5;
    double d = 2.111111111111111111;

    (void)f;
    (void)d;
    std::string name = "aymene";
    std::string& ref = name;


    std::cout << name << std::endl;
    std::cout << ref << std::endl;

    std::cout << "|" << static_cast<char>(788) << "|" << std::endl;
    int b = static_cast<int>(f);
    std::cout << "b = " << b << std::endl;
    return (0);
}


