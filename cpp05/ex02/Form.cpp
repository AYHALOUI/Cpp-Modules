#include "Form.hpp"

Form::Form():name(""), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Default Constructor Called from Form" << std::endl;
}

Form::Form(const Form &copy)
{
    std::cout << "Copy Constructor Called from Form" << std::endl;
    *this = copy;
}

Form& Form::operator = (const Form &copy)
{
    if (this == &copy)
        return (*this);
    this->name = copy.name;
    this->isSigned = copy.isSigned;
    this->gradeToSign = copy.gradeToSign;
    this->gradeToExecute = copy.gradeToExecute;
    return (*this);
}

Form::~Form()
{
   std::cout << "Destructor Called from Form" << std::endl; 
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Constructor parametrazed Called from Form" << std::endl;
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw GradeTooHighException();
    if (this->gradeToSign > 150 || this->gradeToExecute > 150)  
        throw GradeTooLowException(); 
}

const std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIsSigned() const
{
    return (this->isSigned);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void Form::beSigned(BureauCrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream& operator << (std::ostream& out, const Form& form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form is signed: " << form.getIsSigned() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    return (out);
}