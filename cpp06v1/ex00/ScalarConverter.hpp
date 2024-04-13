#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cctype>
#include <cmath>
#include <cstdlib>

enum datatype {
    TYPE_INT,
    TYPE_LONG,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_INVALID
};

class ScalarConverter {

    private:
        ScalarConverter();
        
    
    public:
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator= (const ScalarConverter& copy);
        static void convert (std::string value);
        ~ScalarConverter();
};


#endif