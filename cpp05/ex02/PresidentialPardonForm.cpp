#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    this->target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "Constructor Parametrized from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target)
{
    std::cout << "Copy constructor called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    std::cout << "Assignation operator called from PresidentialPardonForm" << std::endl;
    if (this == &copy)
        return (*this);
    this->target = copy.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called from PresidentialPardonForm" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(BureauCrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSignedForm() == false)
        throw AForm::FormNotSignedException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}