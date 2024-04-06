#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "BureauCrat.hpp"


class Form
{
    private:
        const std::string name_form;
        bool signed_form;
        const int grade_to_sign;
        const int grade_to_execute;

    public:
        /* orhtodox canonical form */
        Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        ~Form();

        Form(std::string name, int grade_to_sign, int grade_to_execute);

        /* Getters */
        std::string getNameForm() const;
        bool getSignedForm() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        /* additional functions */
        void beSigned(const BureauCrat &bureaucrat);


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
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif