#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
   
    try
    {
        // PresidentialPardonForm *presidential = new PresidentialPardonForm("presidential");
        // RobotomyRequestForm *robotomy = new RobotomyRequestForm("robotomy");
        ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("shrubbery");
        Bureaucrat *bureaucrat = new Bureaucrat("bureaucrat", 130);
        // BureauCrat *bureaucrat2 = new BureauCrat("bureaucrat2", 150);
        // BureauCrat *bureaucrat3 = new BureauCrat("bureaucrat3", 100);

        // presidential->beSigned(*bureaucrat);
        // presidential->execute(*bureaucrat);

        // robotomy->beSigned(*bureaucrat2);
        // robotomy->execute(*bureaucrat2);

        shrubbery->beSigned(*bureaucrat);
        shrubbery->execute(*bureaucrat);
    }
    catch(const std::exception& e)
    {
       std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

