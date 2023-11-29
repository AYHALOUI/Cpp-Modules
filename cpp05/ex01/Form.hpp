#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "BureauCrat.hpp"

class BureauCrat;
class Form
{
    private:
        std::string name;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;

    public:
        Form();
        Form(const Form &copy);
        Form &operator = (const Form &copy);
        ~Form();

        Form(std::string name, int gradeToSign, int gradeToExecute);

        const std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(BureauCrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade too low");
                }
        };
};
std::ostream &operator << (std::ostream &out, const Form &form);

#endif