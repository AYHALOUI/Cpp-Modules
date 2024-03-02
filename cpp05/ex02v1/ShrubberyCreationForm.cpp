#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", false, 145, 137)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
    std::cout << "Constructor Parametrazed Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy), target(copy.target)
{
    std::cout << "Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& copy)
{
    if (this == &copy)
        return (*this);
    this->target = copy.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(BureauCrat const & executor) const
{
    std::string fileName = this->target + "_shrubbery";
    std::ofstream outFileName(fileName);

    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    
    
    if (outFileName.is_open())
    {
        outFileName << "       _-_\n";
        outFileName << "    /~~   ~~\\\n";
        outFileName << " /~~         ~~\\\n";
        outFileName << "{               }\n";
        outFileName << " \\  _-     -_  /\n";
        outFileName << "   ~  \\\\ //  ~\n";
        outFileName << "_- -   | | _- _\n";
        outFileName <<  "  _ -  | |   -_\n";
        outFileName << "      // \\\\\n";
        outFileName.close();
        std::cout << "File " << fileName << " has been created" << std::endl;
    }
    else
        std::cout << "Error: Could not open file" << std::endl;
}