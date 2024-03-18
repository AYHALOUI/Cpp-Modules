#ifndef FORM_HPP
#define FORM_HPP

#include <string.h>
#include <iostream>
#include "BureauCrat.hpp"

class Form
{
    private:
        const std::string name;
        int grade;
        int grade_execute;
        bool is_signed;

    public:
        Form();
        Form(const std::string &name, bool is_signed, const int grade, const int grade_execute);
        Form(const Form &copy);
        Form& operator = (const Form& copy);
        ~Form();

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException()
                {
                    std::cout << "Default Constructor Called from GradeTooHighException" << std::endl;
                }
                const char* what() const throw()
                {
                    return "Grade too low";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException()
                {
                    std::cout << "Default Constructor Called from GradeTooLowException" << std::endl;
                }
                const char* what() const throw()
                {
                    return "Grade too low";
                }
        };
        const std::string& getName() const;
        const int getGrade() const;
        const int getGradeExecute() const;
        bool getIsSigned() const;

        void beSigned(const BureauCrat &bureaucrat);
};

std::ostream &operator << (std::ostream &out, const Form &Form);

#endif