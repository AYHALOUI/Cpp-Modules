#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
    std::cout << "Copy Constructor Called from PresidentialPardonForm" << std::endl;
    this->target = copy.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
    std::cout << "Assignation Operator Called from PresidentialPardonForm" << std::endl;
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    this->target = copy.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor Called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "Constructor parametrazed Called from PresidentialPardonForm" << std::endl;
    this->target = target;
}

void PresidentialPardonForm::execute(BureauCrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
