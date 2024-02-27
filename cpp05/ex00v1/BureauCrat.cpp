#include "BureauCrat.hpp"

BureauCrat::BureauCrat()
{
	std::cout << "Default Constructor Called" << std::endl;
}

BureauCrat::BureauCrat(const std::string& name, int grade): bureaucrat_name(name), bureaucrat_grade(grade)
{
	std::cout << "Constructor Paramitrazed Called" << std::endl;
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
}

BureauCrat::~BureauCrat()
{
	std::cout << "Destructor Called" << std::endl;
}

int BureauCrat::getGrade() const
{
	return this->bureaucrat_grade;
}

const std::string& BureauCrat::getName() const
{
	return this->bureaucrat_name;
}

