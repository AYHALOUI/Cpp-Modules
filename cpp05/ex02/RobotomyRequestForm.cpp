#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
    std::cout << "Copy Constructor Called from RobotomyRequestForm" << std::endl;
    this->target = copy.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
    std::cout << "Assignation Operator Called from RobotomyRequestForm" << std::endl;
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    this->target = copy.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor Called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "Constructor parametrazed Called from RobotomyRequestForm" << std::endl;
    this->target = target;
}

void RobotomyRequestForm::execute(BureauCrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
}