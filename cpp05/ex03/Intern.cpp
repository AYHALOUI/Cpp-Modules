#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default Constructor Called from Intern" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Copy Constructor Called from Intern" << std::endl;
    *this = copy;
}

Intern& Intern::operator = (const Intern &copy)
{
    std::cout << "Assignation Operator Called from Intern" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Destructor Called from Intern" << std::endl;
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (form[i]);
        }
    }
    throw FormNotFoundException();
}

