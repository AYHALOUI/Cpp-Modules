#ifndef ShurbberyCreationForm_HPP
#define ShurbberyCreationForm_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        /* orhtodox canonical form */
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm& copy);
        ~ShrubberyCreationForm();

        // /* Constructor Parametrized */
        ShrubberyCreationForm(std::string target);

        // /* Getters */
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif