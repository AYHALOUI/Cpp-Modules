#include "AForm.hpp"

AForm::AForm() : name_form("form"), signed_form(false), grade_to_sign(150), grade_to_execute(150)
{
    std::cout << "Default Constructor Called from Form" << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) : name_form(name), signed_form(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    std::cout << "Parametrized Constructor Called from AForm" << std::endl;
    if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
        throw GradeTooHighException();
     if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : name_form(copy.name_form), signed_form(copy.signed_form), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{
    std::cout << "Copy Constructor Called from AForm" << std::endl;
}

AForm& AForm::operator= (const AForm &copy)
{
    if (this == &copy)
        return (*this);
    this->signed_form = copy.signed_form;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destructor Called from AForm" << std::endl;
}

std::string AForm::getNameForm() const 
{
    return (this->name_form);
}

bool AForm::getSignedForm() const 
{
    return (this->signed_form);
}

int AForm::getGradeToSign() const
{
    return (this->grade_to_sign);
}

int AForm::getGradeToExecute() const 
{
    return (this->grade_to_execute);
}


const char* AForm::GradeTooLowException:: what() const throw()
{
    return ("Grade too low");
}

const char* AForm::GradeTooHighException:: what() const throw()
{
    return ("Grade too high");
}

const char* AForm::FormNotSignedException:: what() const throw()
{
    return ("Form not signed");
}

std::ostream& operator<< (std::ostream& out, const AForm& aform)
{
   out << "Name of Form: " << aform.getNameForm() << std::endl;
   out << "Signed Form: " << aform.getNameForm() << std::endl;
   out << "Grade To Sign it: " << aform.getGradeToSign() << std::endl;
   out << "Grade To Execute it: " << aform.getGradeToExecute() << std::endl;
   return (out);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() >= this->grade_to_sign)
        (throw GradeTooLowException());
    this->signed_form = true;
}
