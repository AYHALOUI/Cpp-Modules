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


int Intern::getFormIndex(std::string form_name)
{
    std::string form_template[3] = 
    {   "ShrubberyRequestForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };

    for (int i = 0; i < 3; i++)
    {
        if (form_template[i] == form_name)
            return (i+1);
    }
    return 0;
}

AForm* Intern::makeForm(std::string forme_name, std::string target)
{
    int index_of_form = getFormIndex(forme_name);
    if (!index_of_form)
        throw FormNotFoundException();
    switch (index_of_form)
    {
        case 1:
            return (new ShrubberyCreationForm(target));
        case 2:
            return (new RobotomyRequestForm(target));
        case 3:
            return (new PresidentialPardonForm(target));
    }
    return (NULL);
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}