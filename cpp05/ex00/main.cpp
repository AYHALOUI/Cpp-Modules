#include "BureauCrat.hpp"



int main()
{
    try
    {
        BureauCrat b1 = BureauCrat("aymene", 200);
        BureauCrat b2 = BureauCrat("haloui", 1);
        b2.incrementBureaucratGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}


