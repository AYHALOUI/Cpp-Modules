#include "Form.hpp"

Form::Form(): name("default"), is_signed(false), grade(150), grade_execute(150)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Form::Form(const std::string &name, bool is_signed, const int grade, const int grade_execute): name(name), is_signed(is_signed), grade(grade), grade_execute(grade_execute)
{
    std::cout << "Constructor Paramitrazed Called" << std::endl;
    if (this->grade < 1 || this->grade_execute < 1)
        throw GradeTooHighException();
    if (this->grade > 150 || this->grade_execute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = copy;
}

Form& Form::operator = (const Form& copy)
{
    std::cout << "Assignation Operator Called" << std::endl;
    if (this == &copy)
        return *this;
    this->is_signed = copy.is_signed;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor Called from Form" << std::endl;
}

const std::string& Form::getName() const
{
    return this->name;
}

const int Form::getGrade() const
{
    return this->grade;
}

const int Form::getGradeExecute() const
{
    return this->grade_execute;
}

bool Form::getIsSigned() const
{
    return this->is_signed;
}

std::ostream &operator << (std::ostream &out, const Form &Form)
{
    out << "Form Name: " << Form.getName() << std::endl;
    out << "Form Grade: " << Form.getGrade() << std::endl;
    out << "Form Grade Execute: " << Form.getGradeExecute() << std::endl;
    out << "Form is Signed: " << Form.getIsSigned() << std::endl;
    return out;
}

void Form::beSigned(const BureauCrat &bureaucrat)
{
    if (this->grade <= bureaucrat.getGrade())
        this->is_signed = true;
    else
        throw GradeTooLowException();
}

