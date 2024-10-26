#include "Form.hpp"

Form::Form() : name_form("form"), signed_form(false), grade_to_sign(150), grade_to_execute(150)
{
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name_form(name), signed_form(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    std::cout << "Constructor Paramitrazed Called from Form" << std::endl;
    if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
        throw GradeTooHighException();
     if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &copy) : name_form(copy.name_form), signed_form(copy.signed_form), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{
}

Form& Form::operator= (const Form &copy)
{
    if (this == &copy)
        return (*this);
    this->signed_form = copy.signed_form;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getNameForm() const 
{
    return (this->name_form);
}

bool Form::getSignedForm() const 
{
    return (this->signed_form);
}

int Form::getGradeToSign() const
{
    return (this->grade_to_sign);
}

int Form::getGradeToExecute() const 
{
    return (this->grade_to_execute);
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
    out << "* -------------- Form Information: ----------------- *" << std::endl;
    out << "Name of Form: " << form.getNameForm() << std::endl;
    out << "Signed Form: " << form.getNameForm() << std::endl;
    out << "Grade To Sign it: " << form.getGradeToSign() << std::endl;
    out << "Grade To Execute it: " << form.getGradeToExecute() << std::endl;
   return out;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if ((bureaucrat.gerBureaucratGrade()) >= this->grade_to_sign)
        (throw GradeTooLowException());
    this->signed_form = true;
}

const char* Form::GradeTooLowException:: what() const throw()
{
    return ("Bureaucrat grade is too low!");
}

const char* Form::GradeTooHighException:: what() const throw()
{
    return ("Bureaucrat grade is too high!");
}
