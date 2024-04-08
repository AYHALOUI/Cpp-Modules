#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


// function to check leaks
void checkLeaks()
{
    system("leaks ex03");
}

int main()
{
    try
    {
        Intern *intern = new Intern();
        Bureaucrat *bureaucrat = new Bureaucrat("bureaucrat", 130);

        AForm *form = intern->makeForm("Shrubbery", "shrubbery");
        
        bureaucrat->signForm(*form);
        bureaucrat->executeForm(*form);

        delete bureaucrat;
        delete form;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    atexit(checkLeaks);
    return 0;
}

