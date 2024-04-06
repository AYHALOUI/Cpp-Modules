#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;

    public:
        /* orhtodox canonical form */
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

        // /* Constructor Parametrized */
        RobotomyRequestForm(std::string target);

        // /* Getters */
        std::string getTarget() const;
        void execute(BureauCrat const & executor) const;
};

#endif