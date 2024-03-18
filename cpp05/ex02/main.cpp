#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "iostream"
// #include "string.h"


int main()
{
    AForm *form = new ShrubberyCreationForm("home");
    form->beSigned(BureauCrat("Bureaucrat", 1));
    form->execute(BureauCrat("Bureaucrat", 1));
    delete form;
    return 0;
}


