#ifndef AFORM_HPP
#define AFORM_HPP

#include <string.h>
#include <iostream>
#include "BureauCrat.hpp"

class AForm
{
    private:
        const std::string name;
        const int grade;
        const int grade_execute;
        bool is_signed;

    public:
        AForm();
        AForm(const std::string &name, bool is_signed, const int grade, const int grade_execute);
        AForm(const AForm &copy);
        AForm& operator = (const AForm& copy);
        virtual ~AForm();

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

        class FormNotSignedException : public std::exception
        {
            public:
                FormNotSignedException()
                {
                    std::cout << "Default Constructor Called from FormNotSignedException" << std::endl;
                }
                const char* what() const throw()
                {
                    return "Form not signed";
                }
        };
        const std::string& getName() const;
        const int getGrade() const;
        const int getGradeExecute() const;
        bool getIsSigned() const;

        void beSigned(const BureauCrat &bureaucrat);

        virtual void execute(BureauCrat const & executor) const = 0;
};

std::ostream &operator << (std::ostream &out, const AForm &Form);

#endif