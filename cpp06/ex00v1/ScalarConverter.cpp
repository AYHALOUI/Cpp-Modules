/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:27:47 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/14 23:50:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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

bool is_number(const std::string input)
{
    int index = 0;
    int count = 0;

    if (input[index] == '+' || input[index] == '-')
        index++;
    if (input[index] != '+' && input[index] != '-' && !isdigit(input[index]))
        return (false);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
            count++;
    }
    if (count > 1)
        return (false);
    if (input[input.length() - 1] != 'f' && !isdigit(input[input.length() - 1]))
        return (false);
    for (size_t i = index; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
            return false;
    }
    return true;
}
void ScalarConverter::convert(const std::string input)
{
    if (input.length() == 1 && !isdigit(input[0]))
    {
        std::cout << "--------- Here --------------" << std::endl;
        char c = input[0];
        std::cout << "char: " << "'" << c << "'"<< std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
    else if (is_number(input))
    {
        std::cout << "---------- Here1 ---------" << std::endl;
        double d = std::stod(input);
        std::cout << "char: ";
        if (d >= 32 && d <= 126)
            std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
        else if ((d >= 0 && d <= 31) || d == 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "impossible" << std::endl;

        // to Int
        std::cout << "int: " << static_cast<int>(d) << std::endl;

        // to float
        if ((int(d) - static_cast<float>(d)) != 0)
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;

        // to double
        if ((int(d) - static_cast<double>(d)) != 0)
            std::cout << "double: " << static_cast<double>(d) << std::endl;
        else
            std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
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