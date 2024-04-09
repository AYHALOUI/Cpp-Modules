#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>


class Bureaucrat;
class AForm
{
    private:
        const std::string name_form;
        bool signed_form;
        const int grade_to_sign;
        const int grade_to_execute;

    public:
        /* orhtodox canonical form */
        AForm();
        AForm(const AForm &copy);
        AForm &operator= (const AForm &copy);
        virtual ~AForm();

        AForm(std::string name_form, int grade_to_sign, int grade_to_execute);

        /* Getters */
        std::string getNameForm() const;
        bool getSignedForm() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        /* additional functions */
        void beSigned(const Bureaucrat &bureaucrat);

         /* overide function */
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        
};

std::ostream& operator<< (std::ostream& out, const AForm& form);

#endif