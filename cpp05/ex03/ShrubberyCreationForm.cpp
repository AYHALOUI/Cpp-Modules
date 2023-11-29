#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
    std::cout << "Copy Constructor Called from ShrubberyCreationForm" << std::endl;
    this->target = copy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
    std::cout << "Assignation Operator Called from ShrubberyCreationForm" << std::endl;
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    this->target = copy.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor Called from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Constructor parametrazed Called from ShrubberyCreationForm" << std::endl;
    this->target = target;
}

void ShrubberyCreationForm::execute(BureauCrat const &executor) const
{
    std::string filename = this->target + "_shrubbery";
    if (this->getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    std::ofstream file;
    file.open(filename.c_str());
    file << "       _-_" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << " /~~         ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\\\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\\\" << std::endl;
    file.close();
}