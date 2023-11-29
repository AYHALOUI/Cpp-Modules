#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
        
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm(std::string target);
        void execute(BureauCrat const &executor) const;
};

#endif