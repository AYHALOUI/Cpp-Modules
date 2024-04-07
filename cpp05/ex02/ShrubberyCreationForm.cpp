#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    this->target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Constructor Parametrized from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), target(copy.target)
{
    std::cout << "Copy constructor called from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &copy)
{
    std::cout << "Assignation operator called from ShrubberyCreationForm" << std::endl;
    if (this == &copy)
        return (*this);
    this->target = copy.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called from ShrubberyCreationForm" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.gerBureaucratGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (this->getSignedForm() == false)
        throw AForm::FormNotSignedException();
    std::string fileName = this->target + "_shrubbery";
    std::ofstream outFileName(fileName);

    if (outFileName.is_open())
    {
        outFileName << "   oxoxoo    ooxoo" << std::endl;
        outFileName << "  ooxoxo oo  oxoxooo" << std::endl;
        outFileName << " oooo xxoxoo ooo ooox" << std::endl;
        outFileName << " oxo o oxoxo  xoxxoxo" << std::endl;
        outFileName << "  oxo xooxoooo o ooo" << std::endl;
        outFileName << "    ooo\\oo\\  /o/o" << std::endl;
        outFileName << "        \\  \\/ /" << std::endl;
        outFileName << "         |   /" << std::endl;
        outFileName << "         |  |" << std::endl;
        outFileName << "         | D|" << std::endl;
        outFileName << "         |  |" << std::endl;
        outFileName << "         |  |" << std::endl;
        outFileName << "  ______/____\\____" << std::endl;
        outFileName.close();
    }
    else
        std::cout << "Error: could not open file" << std::endl;
}