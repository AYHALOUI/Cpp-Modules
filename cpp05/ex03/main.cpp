#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

// function to check leaks
void checkLeaks()
{
    system("leaks ex03");
}

int main()
{
    try
    {
        Intern intern;
        AForm *form = intern.makeForm("ShrubberyRequestForm", "Bender");
        Bureaucrat bureaucrat("aymene", 180);

        std::cout << "--------------------------------" << std::endl;

        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);

        std::cout << "--------------------------------" << std::endl;

        delete form;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    atexit(checkLeaks);
    return 0;
}

