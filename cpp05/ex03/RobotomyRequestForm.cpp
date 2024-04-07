#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "Constructor Parametrized from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), target(copy.target)
{
    std::cout << "Copy constructor called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& copy)
{
    std::cout << "Assignation operator called from RobotomyRequestForm" << std::endl;
    if (this == &copy)
        return (*this);
    this->target = copy.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called from RobotomyRequestForm" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int time_to_robotomize = rand() % 2;
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (this->getSignedForm() == false)
        throw AForm::FormNotSignedException();
    std::cout << "Drilling noises..." << std::endl;
    if (!time_to_robotomize)
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getTarget() << " has failed to be robotomized" << std::endl;
}