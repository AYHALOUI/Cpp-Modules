#include "Bureaucrat.hpp"




int main()
{
    try
    {
        Bureaucrat b1 = Bureaucrat("aymene", 150);
        Bureaucrat b2 = Bureaucrat("haloui", 0);
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


