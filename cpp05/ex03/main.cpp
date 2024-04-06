#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
    try
    {
        Intern *intern = new Intern();
        BureauCrat *bureaucrat = new BureauCrat("bureaucrat", 130);
        AForm *form = intern->makeForm("shrubbery creation", "shrubbery");
        form->beSigned(*bureaucrat);
        form->execute(*bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

