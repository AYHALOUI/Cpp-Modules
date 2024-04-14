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
        ~ScalarConverter();


        /* print functions */
        static void print_simple_case(char c);
        static void print_pseudo_literals (std::string str);

        /* parsing functions */
        static int count_nb_point(std::string number);
        static bool is_valide_number(std::string number);
        static bool is_pseudo_literals (std::string str);


        /* convert functions */
        static void toInt(std::string number);
        static void toChar(std::string number);
        static void toFloat(std::string number);
        static void toDouble(std::string number);

        /* main function of converting */
        static void convert (std::string str);
};


#endif