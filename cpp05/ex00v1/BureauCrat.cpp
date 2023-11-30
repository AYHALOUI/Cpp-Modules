#include "BureauCrat.hpp"

BureauCrat::BureauCrat():bureaucrat_name("aymene")
{
	std::cout << "Default Constructor Called from Bureaucrat" << std::endl;
}

BureauCrat::BureauCrat(std::string name, int grade): bureaucrat_name(name)
{
	this->bureaucrat_grade = grade;
}

// BureauCrat::BureauCrat(const BureauCrat& copy)
// {
// 	// if (this == copy)
// 	// 	return (*this);
// 	return (copy);
// }