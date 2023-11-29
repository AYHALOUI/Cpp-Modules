#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm(std::string target);
        void execute(BureauCrat const &executor) const;
};

#endif