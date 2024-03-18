#ifndef SHRUUBERYCREATIONFORM_HPP
#define SHRUUBERYCREATIONFORM_HPP

#include <string.h>
#include <iostream>
#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& copy);
        virtual ~ShrubberyCreationForm();
        void execute(BureauCrat const & executor) const; 
};

#endif