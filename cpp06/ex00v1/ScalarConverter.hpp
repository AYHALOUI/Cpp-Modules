#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <limits>


class ScalarConverter
{
    private:

        std::string input;
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);

        ScalarConverter(const std::string& input);
        
        ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();

    public:

        std::string getInput() const;
        void setInput(const std::string& input);
        void convertToInt();
        static void convert(const std::string& input);
        
};

#endif