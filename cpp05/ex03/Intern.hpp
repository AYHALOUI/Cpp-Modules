#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        std::string name;
        std::string target;
        Form *form;
        Form *forms[3];
        std::string formsNames[3];
        Form *(*formsFunc[3])(std::string target);
        
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator = (const Intern &copy);
        ~Intern();

        Intern(std::string name);
        Form *makeForm(std::string formName, std::string target);
        Form *makeShrubberyCreationForm(std::string target);
        Form *makeRobotomyRequestForm(std::string target);
        Form *makePresidentialPardonForm(std::string target);
};

#endif