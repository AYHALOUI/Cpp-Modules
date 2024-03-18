#include "AForm.hpp"

AForm::AForm():name(""), is_signed(false), grade_execute(150), grade(150)
{
    std::cout << "Default Conctructor called" << std::endl;
}


AForm::AForm(const std::string &name, bool is_signed, const int grade, const int grade_execute):name(name), is_signed(is_signed), grade(grade), grade_execute(grade_execute)
{
    std::cout << "Constructor Parametrazed Called" << std::endl; 
}


AForm::AForm(const AForm& copy):name(copy.name), is_signed(copy.is_signed), grade_execute(copy.grade_execute), grade(grade)
{
    std::cout << "Constructor Paramitrazed Called" << std::endl;
    if (this->grade < 1 || this->grade_execute < 1)
        throw GradeTooHighException();
    if (this->grade > 150 || this->grade_execute > 150)
        throw GradeTooLowException();
}

AForm& AForm::operator = (const AForm& copy)
{
    if (this == &copy)
        return (*this);
    this->is_signed = copy.is_signed;
    return *this;
}

AForm::~AForm()
{
    std::cout << "Destructor Called" << std::endl;
}

const std::string& AForm::getName() const
{
    return this->name;
}

const int AForm::getGrade() const
{
    return this->grade;
}

const int AForm::getGradeExecute() const
{
    return this->grade_execute;
}

bool AForm::getIsSigned() const
{
    return this->is_signed;
}

std::ostream &operator << (std::ostream &out, const AForm &AForm)
{
    out << "Form Name: " << AForm.getName() << std::endl;
    out << "Form Grade: " << AForm.getGrade() << std::endl;
    out << "Form Grade Execute: " << AForm.getGradeExecute() << std::endl;
    out << "Form is Signed: " << AForm.getIsSigned() << std::endl;
    return out;
}

void AForm::beSigned(const BureauCrat &bureaucrat)
{
    if (this->grade <= bureaucrat.getGrade())
        this->is_signed = true;
    else
        throw GradeTooLowException();
}