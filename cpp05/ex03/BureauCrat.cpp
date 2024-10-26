#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor Called from Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string bureaucrat_name, int bureaucrat_grade): bureaucrat_name(bureaucrat_name), bureaucrat_grade(bureaucrat_grade)
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

int Bureaucrat::getBureaucratGrade() const
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

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureauCrat)
{
	out << bureauCrat.getBureaucratName() << ",  bureaucrat grade " << bureauCrat.getBureaucratGrade() << std::endl;
	return (out);
}

void Bureaucrat::signForm(AForm& aform)
{
	try
	{
		aform.beSigned(*this);
		std::cout << this->bureaucrat_name << " signed " << aform.getNameForm() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->bureaucrat_name << " couldn't sign " << aform.getNameForm() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & aform)
{
	try
	{
		aform.execute(*this);
		std::cout << this->bureaucrat_name << " executed " << aform.getNameForm() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->bureaucrat_name << " couldn't execute " << aform.getNameForm() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade is too low!";
}