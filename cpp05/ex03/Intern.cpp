#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default Constructor Called from Intern" << std::endl;
}

Intern::Intern(const Intern& copy)
{
    std::cout << "Copy Constructor Called from Intern" << std::endl;
    (*this) = copy;
}

Intern& Intern::operator= (const Intern& copy)
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


AForm* Intern::makeForm(std::string forme_name, std::string target)
{
    // array of forms
    AForm *objects_templates[3] = { 
        new ShrubberyCreationForm(target), 
        new RobotomyRequestForm(target), 
        new PresidentialPardonForm(target)
    };

    // array of forms names
    std::string forms_names[3] = {
        "Shrubbery",
        "Robotomy",
        "Presidential"
    };

    for (int i = 0; i < 3; i++)
    {
        if (forme_name == forms_names[i])
        {
            std::cout << "Intern creates " << forms_names[i] << " form" << std::endl;
            return (objects_templates[i]);
        }
    }
    throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}