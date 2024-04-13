#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(): input("input")
{
    //std::cout << "ScalarConverter constructor ..." << std::endl;
}

ScalarConverter::ScalarConverter(const std::string& input): input(input)
{
    //std::cout << "ScalarConverter constructor ..." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy): input(copy.input)
{
    std::cout << "ScalarConverter copy constructor ..." << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
    std::cout << "ScalarConverter operator= ..." << std::endl;
    if (this != &copy)
        input = copy.input;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    //std::cout << "ScalarConverter destructor..." << std::endl;
}

std::string ScalarConverter::getInput() const
{
    return input;
}

void ScalarConverter::setInput(const std::string& input)
{
    this->input = input;
}

void ScalarConverter::convertToInt()
{
    // std::cout << "ScalarConverter convertToInt ..." << std::endl;
    // int i = std::stoi(input);
    // std::cout << "int: " << i << std::endl;
}


// function to check if a string nan or inf or -inf or +inf or -inff or +inff or inff or nanf
bool is_nan(const std::string& input)
{
    if (input == "nan" || input == "nanf" || 
        input == "-inf" || input == "-inff" 
        || input == "+inf" || input == "+inff")
        return true;
    return false;
}

// function to check if a string
// is a valid number
bool is_number(const std::string& input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
            return false;
    }
    return true;
}
void ScalarConverter::convert(const std::string& input)
{
    if (input.length() == 1 && !isdigit(input[0]))
    {
        char c = input[0];
        std::cout << "char: " << "'" << c << "'"<< std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
    else if (is_number(input))
    {
        std::cout << "Here" << std::endl;
        double d = std::stod(input);
        std::cout << "char: ";
        if (d >= 32 && d <= 126)
            std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else if (is_nan(input))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (input == "nan" || input == "nanf")
        {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        }
        else if (input == "-inf" || input == "-inff")
        {
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        else if (input == "+inf" || input == "+inff")
        {
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }
    }
    else
        std::cout << "Invalid input" << std::endl;
}