#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called from ScalarConverter" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    (void)copy;
    std::cout << "Copy constructor called from ScalarConverter" << std::endl;
}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter &copy)
{
    std::cout << "Assignation operator called from ScalarConverter" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor called from ScalarConverter" << std::endl;
}

void ScalarConverter::convert(std::string& literal) 
{
    if (literal.length() == 1 && !isdigit(literal[0])) {
        std::cout << "char: '" << literal[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
    } else {
        try {
            int i = 0;
            std::istringstream(literal) >> i;
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        } catch (const std::exception& e) {
            std::cout << "char: impossible" << std::endl;
        }
        try {
            int i = 0;
            std::istringstream(literal) >> i;
            std::cout << "int: " << i << std::endl;
        } catch (const std::exception& e) {
            std::cout << "int: impossible" << std::endl;
        }
        try {
            float f = 0.0f;
            std::istringstream(literal) >> f;
            std::cout << "float: " << f << "f" << std::endl;
        } catch (const std::exception& e) {
            std::cout << "float: impossible" << std::endl;
        }
        try {
            double d = 0.0;
            std::istringstream(literal) >> d;
            std::cout << "double: " << d << std::endl;
        } catch (const std::exception& e) {
            std::cout << "double: impossible" << std::endl;
        }
    }
}
