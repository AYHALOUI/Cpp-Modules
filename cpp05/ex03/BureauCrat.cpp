#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor Called from Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): bureaucrat_name(name), bureaucrat_grade(grade)
{
	std::cout << "Constructor Paramitrazed Called from Bureaucrat" << std::endl;
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

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& copy)
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

int Bureaucrat::getGrade() const
{
	return (this->bureaucrat_grade);
}

const std::string Bureaucrat::getName() const
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

std::ostream& operator << (std::ostream& out, const Bureaucrat& bureauCrat)
{
	out << bureauCrat.getName() << ",  bureaucrat grade" << bureauCrat.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::signForm(AForm& form)
{
	if (this->bureaucrat_grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << this->bureaucrat_name << " signs " << form.getNameForm() << std::endl;
	}
	else
		std::cout << this->bureaucrat_name << " cannot sign " << form.getNameForm() << " because his grade is too low" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
	if (this->bureaucrat_grade <= form.getGradeToExecute())
	{
		form.execute(*this);
		std::cout << this->bureaucrat_name << " executed " << form.getNameForm() << std::endl;
	}
	else
		std::cout << this->bureaucrat_name << " cannot execute " << form.getNameForm() << " because his grade is too low" << std::endl;
}