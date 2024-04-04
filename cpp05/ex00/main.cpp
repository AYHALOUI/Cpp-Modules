#include "BureauCrat.hpp"

int main()
{
    try
    {
        BureauCrat b1 = BureauCrat("aymene", 150);
        BureauCrat b2 = BureauCrat("haloui", 2);
        b2.incrementBureaucratGrade();

        std::cout << b1 ;
        std::cout << b2 ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}


