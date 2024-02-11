#include "BureauCrat.hpp"


BureauCrat::BureauCrat()
{
    std::cout << "Default Constructor" << std::endl;
}

BureauCrat::BureauCrat(const BureauCrat &copy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = copy;
}

BureauCrat& BureauCrat::operator = (const BureauCrat &copy)
{
    if (this == &copy)
        return (*this);
    this->name = copy.name;
    this->grade = copy.grade;
    return (*this);
}

BureauCrat::~BureauCrat()
{
    std::cout << "Destructor Called" << std::endl;
}

/***********************************************************/

BureauCrat::BureauCrat(const std::string name, int grade): name(name), grade(grade)
{
    std::cout << "Constructor Parameterized Called" << std::endl;
}