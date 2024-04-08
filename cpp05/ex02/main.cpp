#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat bureaucrat("John", 1);
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("John");
        PresidentialPardonForm pardonForm("Jane");

        std::cout << "* --------------- Sign Form ------------------ *" << std::endl;

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        std::cout << "* ---------------- Executed ------------------ *" << std::endl;
        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);

        std::cout << "* ----------------- Grade ------------------- *" << std::endl;
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
    return 0;
}

