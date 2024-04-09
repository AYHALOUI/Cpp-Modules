#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "*------------- Constructors --------------*" << std::endl;
        Bureaucrat b1 = Bureaucrat("aymene", 150);
        Bureaucrat b2 = Bureaucrat("haloui", 2);

        std::cout << "*------------- Test Functions --------------*" << std::endl;
        b2.incrementBureaucratGrade();

        std::cout << b1 ;
        std::cout << b2 ;

        std::cout << "*------------- Destructors --------------*" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "*------------- End of the program --------------*" << std::endl;
    return (0);
}


