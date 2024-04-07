#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : bureaucrat_name("default_name")
{
	std::cout << "Default Constructor Called from Bureaucrat" << std::endl;
	this->bureaucrat_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string bureacrat_name, int grade): bureaucrat_name(bureacrat_name), bureaucrat_grade(grade)
{
	std::cout << "Constructor Paramitrazed Called" << std::endl;
	if (this->bureaucrat_grade < 1)
		(throw GradeTooHighException());
	if (this->bureaucrat_grade > 150)
		(throw GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Copy Constructor Called from Bureaucrat" << std::endl;
	(*this) = copy;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& copy)
{
	std::cout << "Assignation Operator Called from Bureaucrat" << std::endl;
	if (this == &copy)
		return (*this);
	this->bureaucrat_grade = copy.bureaucrat_grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called from Bureaucrat" << std::endl;
}

int Bureaucrat::gerBureaucratGrade() const
{
	return (this->bureaucrat_grade);
}

const std::string Bureaucrat::getBureaucratName() const
{
	return (this->bureaucrat_name);
}

void Bureaucrat::incrementBureaucratGrade()
{
	this->bureaucrat_grade--;
	if (this->bureaucrat_grade < 1)
		(throw GradeTooHighException());
}

void Bureaucrat::decrementBureaucratGrade()
{
	this->bureaucrat_grade++;
	if (this->bureaucrat_grade < 1)
		(throw GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureauCrat)
{
	out << bureauCrat.getBureaucratName() << ",  bureaucrat grade" << bureauCrat.gerBureaucratGrade() << std::endl;
	return out;
}

void Bureaucrat::signForm(Form& form)
{
	if (this->bureaucrat_grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << this->bureaucrat_name << " signs " << form.getNameForm() << std::endl;
	}
	else
		std::cout << this->bureaucrat_name << " cannot sign " << form.getNameForm() << " because his grade is too low" << std::endl;
}