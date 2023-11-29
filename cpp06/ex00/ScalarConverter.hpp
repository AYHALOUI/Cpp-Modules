#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>



class ScalarConverter
{
    private:
        std::string str;    
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator = (const ScalarConverter &copy);
        ~ScalarConverter();

        ScalarConverter(std::string str);
        static void convert(std::string& literal); 
};
# endif