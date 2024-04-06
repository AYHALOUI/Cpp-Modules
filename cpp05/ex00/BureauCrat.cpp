#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor Called From Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): bureaucrat_name(name), bureaucrat_grade(grade)
{
	std::cout << "Constructor Paramitrazed Called" << std::endl;
	if (this->bureaucrat_grade < 1)
		throw GradeTooHighException();
	if (this->bureaucrat_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& copy)
{
	std::cout << "Assignation Operator Called" << std::endl;
	if (this == &copy)
		return *this;
	this->bureaucrat_grade = copy.bureaucrat_grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called" << std::endl;
}

int Bureaucrat::gerBureaucratGrade() const
{
	return this->bureaucrat_grade;
}

const std::string Bureaucrat::getBureaucratName() const
{
	return this->bureaucrat_name;
}

void Bureaucrat::incrementBureaucratGrade()
{
	this->bureaucrat_grade--;
	if (this->bureaucrat_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementBureaucratGrade()
{
	this->bureaucrat_grade++;
	if (this->bureaucrat_grade < 1)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getBureaucratName() << ", bureaucrat grade " << bureaucrat.gerBureaucratGrade() << std::endl;
	return out;
}