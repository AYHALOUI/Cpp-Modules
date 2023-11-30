#include "BureauCrat.hpp"

int main()
{

    std::string name = "aymene";
    std::string& ref = name;


    std::cout << name << std::endl;
    std::cout << ref << std::endl;

    std::cout << "|" << static_cast<char>(788) << "|" << std::endl;
    return (0);
}