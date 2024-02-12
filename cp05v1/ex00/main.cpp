#include "BureauCrat.hpp"

int main()
{
    BureauCrat *bureaucrat = new BureauCrat("aymene", 150); 
    BureauCrat *bureaucrat2 = new BureauCrat("haloui", 1);

   try {
        bureaucrat->decrementGrade();
        bureaucrat2->incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    delete bureaucrat;
    delete bureaucrat2;
    return (0);
}