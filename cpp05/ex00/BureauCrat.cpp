#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): bureaucrat_name("dedault_name")
{
	std::cout << "Default Constructor Called From Bureaucrat" << std::endl;
	this->bureaucrat_grade = 150;
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
		return *this;
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

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getBureaucratName() << ", bureaucrat grade " << bureaucrat.gerBureaucratGrade() << std::endl;
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}