#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor called from Intern" << std::endl;
    this->name = "Default";
    this->formsNames[0] = "shrubbery creation";
    this->formsNames[1] = "robotomy request";
    this->formsNames[2] = "presidential pardon";
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Copy constructor called from Intern" << std::endl;
    this->name = copy.name;
    this->formsNames[0] = copy.formsNames[0];
    this->formsNames[1] = copy.formsNames[1];
    this->formsNames[2] = copy.formsNames[2];
}