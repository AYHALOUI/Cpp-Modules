#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class BureauCrat
{
    private:
        std::string name;
        int grade;
    
    public:
        BureauCrat();
        BureauCrat(const BureauCrat &copy);
        BureauCrat &operator = (const BureauCrat &copy);
        ~BureauCrat();

        /***************************************/
        BureauCrat(const std::string name, int grade);

        std::string getName();
        int getGrade();

        void incrementGrade();

        void  decrementGrade();


        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException()
                {
                    std::cout << "Default Conctructor from GradeTooHighException" << std::endl;
                }

                const char *what() const throw() {
                    return ("Grade too high");
                }
                // ~GradeTooHighException()
                // {
                //     std::cout << "Default Destrcutor called from GradeTooLowException" << std::endl;
                // }
        };

        class GradeTooLowException : public std::exception {

            public:
                GradeTooLowException()
                {
                    std::cout << "Default Conctructor from GradeTooLowException" << std::endl;
                }
                const char *what() const throw() {
                    return ("Grade too low");
                }
        };
};
#endif