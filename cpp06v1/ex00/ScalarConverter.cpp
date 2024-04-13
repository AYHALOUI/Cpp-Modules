#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor Called from ScalarConverter" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    std::cout << "Copy Constructor Called from ScalarConverter" << std::endl;
    (*this) = copy;
}

ScalarConverter& ScalarConverter::operator= (const ScalarConverter& copy)
{
    (void) copy;
    std::cout << "Assigment operator Called from ScalarConverter" << std::endl;
    return (*this);
}

bool is_float(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            return (true);
    }
    return (false);
}

datatype checkType(std::string str)
{
    if (is_float(str))
    {
        try
        {
            std::stof(str);
            return (TYPE_FLOAT);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return (TYPE_INVALID);
        }
    }
    else
    {
        try
        {
            std::stoi(str);
            return (TYPE_INT);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return (TYPE_INVALID);
        }
    }
}



ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor Called from ScalarConverter" << std::endl;
}