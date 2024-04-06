#include "BureauCrat.hpp"
#include "AForm.hpp"

BureauCrat::BureauCrat()
{
	std::cout << "Default Constructor Called" << std::endl;
}

BureauCrat::BureauCrat(const std::string& name, int grade): bureaucrat_name(name), bureaucrat_grade(grade)
{
	std::cout << "Constructor Paramitrazed Called" << std::endl;
	if (this->bureaucrat_grade < 1)
		throw GradeTooHighException();
	if (this->bureaucrat_grade > 150)
		throw GradeTooLowException();
}

BureauCrat::BureauCrat(const BureauCrat& copy)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = copy;
}

BureauCrat& BureauCrat::operator = (const BureauCrat& copy)
{
	std::cout << "Assignation Operator Called" << std::endl;
	if (this == &copy)
		return *this;
	this->bureaucrat_grade = copy.bureaucrat_grade;
	return (*this);
}

BureauCrat::~BureauCrat()
{
	std::cout << "Destructor Called" << std::endl;
}

int BureauCrat::getGrade() const
{
	return this->bureaucrat_grade;
}

const std::string BureauCrat::getName() const
{
	return this->bureaucrat_name;
}

void BureauCrat::incrementBureaucratGrade()
{
	this->bureaucrat_grade--;
	if (this->bureaucrat_grade < 1)
		throw GradeTooHighException();
}

void BureauCrat::decrementBureaucratGrade()
{
	this->bureaucrat_grade++;
	if (this->bureaucrat_grade < 1)
		throw GradeTooLowException();
}

const char* BureauCrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* BureauCrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream& operator << (std::ostream& out, const BureauCrat& bureauCrat)
{
	out << bureauCrat.getName() << ",  bureaucrat grade" << bureauCrat.getGrade() << std::endl;
	return out;
}

void BureauCrat::signForm(AForm& form)
{
	if (this->bureaucrat_grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << this->bureaucrat_name << " signs " << form.getNameForm() << std::endl;
	}
	else
		std::cout << this->bureaucrat_name << " cannot sign " << form.getNameForm() << " because his grade is too low" << std::endl;
}

void BureauCrat::executeForm(AForm const & form)
{
	if (this->bureaucrat_grade <= form.getGradeToExecute())
	{
		form.execute(*this);
		std::cout << this->bureaucrat_name << " executed " << form.getNameForm() << std::endl;
	}
	else
		std::cout << this->bureaucrat_name << " cannot execute " << form.getNameForm() << " because his grade is too low" << std::endl;
}