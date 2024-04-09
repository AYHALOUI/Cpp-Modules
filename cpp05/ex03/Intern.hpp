#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        /* orhtodox canonical form */
        Intern();
        Intern(const Intern& copy);
        Intern& operator= (const Intern& copy);
        ~Intern();

        int getIndexFormTemplate(std::string form_name);
        AForm *makeForm(std::string form_name, std::string target);
        class FormNotFoundException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif