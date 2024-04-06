#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        /* orhtodox canonical form */
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();

        // /* Constructor Parametrized */
        PresidentialPardonForm(std::string target);

        // /* Getters */
        std::string getTarget() const;
        void execute(BureauCrat const & executor) const;
};

#endif