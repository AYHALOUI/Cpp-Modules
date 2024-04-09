#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat bureaucrat("aymene", 1);
        ShrubberyCreationForm shrubberyForm("ahaloui");
        RobotomyRequestForm robotomyForm("Lwalid");
        PresidentialPardonForm pardonForm("Lwalida");

        std::cout << "* --------------- Sign Forms ------------------ *" << std::endl;

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        std::cout << "* ---------------- Executed Forms ------------------ *" << std::endl;
        
        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);

        std::cout << "* ----------------- Destructors ------------------- *" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

