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
};
#endif