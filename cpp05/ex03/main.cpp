#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Intern intern;
        AForm *form;
        Bureaucrat bureaucrat("aymene", 120);

        std::cout << "---------- Sign and Execute Form ----------" << std::endl;

        form = intern.makeForm("ShrubberyRequestForm", "ahaloui");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);

        std::cout << "------------ Destructors ------------" << std::endl;

        delete form;

        std::cout << "------------------ End -----------------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

