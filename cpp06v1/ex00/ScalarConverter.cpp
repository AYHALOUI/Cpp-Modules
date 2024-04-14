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


void ScalarConverter::print_simple_case(char c)
{
    std::cout << "char: " << "'" << static_cast<char>(c) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<float>(c) << ".0"<<  std::endl;
}

int ScalarConverter::count_nb_point(std::string number)
{
    int count = 0;
    for (size_t i = 0; i < number.length(); i++)
    {
        if (number[i] == '.')
            count++;
    }
    return (count);
}

bool ScalarConverter::is_valide_number(std::string number)
{
    int index = 0;
    long int nb = atol(number.c_str());
    if (nb > INT_MAX || nb < INT_MIN)
        return (false);
    if (number[index] == '+' || number[index] == '-')
        index++;
    if (!isdigit((number[index])) 
        || count_nb_point(number) > 1)
        return (false);
    for (size_t i = index; i < number.length(); i++)
    {
        if (!isdigit(number[i]) && number[i]!= '.' &&  number[i]!= 'f')
            return (false);
    }
    return (true);
}

void ScalarConverter::toInt(std::string number)
{
    int nb = std::atoi(number.c_str());
    std::cout << "int: " << static_cast<int>(nb) << std::endl;
}

void ScalarConverter::toChar(std::string number)
{
    int nb = std::atoi(number.c_str());
    if (nb >= 32 && nb <= 126)
        std::cout << "char: " <<  "'" << static_cast<char>(nb) << "'" << std::endl;
    else if ((nb >= 0 && nb <= 31) || nb == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::toFloat(std::string number)
{
    float nb = std::atof(number.c_str());
    if (static_cast<int>(nb) - static_cast<float>(nb) != 0)
        std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
}

void ScalarConverter::toDouble(std::string number)
{
    double nb = (double) std::atof(number.c_str());
    if ((static_cast<int>(nb) - static_cast<double>(nb)) != 0)
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

bool ScalarConverter::is_pseudo_literals (std::string str)
{
    if (str == "nan" || str == "nanf" || 
            str == "-inf" || str == "-inff" 
            || str == "+inf" || str == "+inff")
        return (true);
    return (false);
}

void ScalarConverter::print_pseudo_literals (std::string str)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (str == "nan" || str == "nanf")
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}

void ScalarConverter::convert(std::string str)
{
    if (str.length() == 1)
    {
        if (!isdigit(str[0]))
            print_simple_case(str[0]);
    }
    else if (is_valide_number(str))
    {
        toChar(str);
        toInt(str);
        toFloat(str);
        toDouble(str);
    }
    else if (is_pseudo_literals(str))
        print_pseudo_literals(str);
    else
        std::cout << "Error of input" << std::endl;
}


ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor Called from ScalarConverter" << std::endl;
}