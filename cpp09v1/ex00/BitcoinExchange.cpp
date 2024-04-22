/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:05 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/22 17:33:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    // std::cout << "Constructor called for BitcoinExchange" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    std::cout << "Copy constructor called for BitcoinExchange" << std::endl;
    (*this) = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    std::cout << "Assignation operator called for BitcoinExchange" << std::endl;
    if (this == &rhs)
        return (*this);
    my_data = rhs.my_data;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "Destructor called for BitcoinExchange" << std::endl;
}

void BitcoinExchange::read_data_db(std::string filename)
{
    std::ifstream dataFile(filename);
    std::string line;
    std::string key;
    std::string value;
    if (!dataFile.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return ;
    }
    while (std::getline(dataFile, line))
    {
        std::istringstream iss(line);
        std::getline(iss, key, ',');
        std::getline(iss, value, ',');
        my_data[key] = value;
    }
    dataFile.close();

}

std::map<std::string, std::string> BitcoinExchange::getBitcoinValues() const
{
    return my_data;
}

bool check_key(std::string key)
{
    for (size_t i = 0; i < key.length(); i++)
    {
        if (!isdigit(key[i]) && key[i] != '-')
        {
            std::cout << "Error: Date Not Valid" << std::endl;
            return (false);   
        }
    }
    return (true);
}

bool check_value(std::string value)
{
    double val = std::atof(value.c_str());
    if (val < 0)
    {
        std::cout << "Error: not a positive number" << std::endl;
        return (false);
    }
    for (size_t i = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]) && value[i] != '.')
        {
            std::cout << "Error: Value Not Valid" << std::endl;
            return (false);
        }
    }
    return (true);
}

int count_dot(std::string value)
{
    int count = 0;
    for (size_t i = 0; i < value.length(); i++)
    {
        if (value[i] == '.')
            count++;
    }
    return (count);
}

bool isValidDateFormat(std::string date)
{
    if (date.length() != 10)
        return (false);
    if (date[4] != '-' || date[7] != '-')
        return (false);
    for (size_t i = 0; i < date.length(); i++)
    {
        if (i == 4 || i == 7)
            continue ;
        if (!isdigit(date[i]))
            return (false);
    }
    return (true);
}

bool isValidYear(std::string date)
{
    int year = std::atoi(date.substr(0, 4).c_str());
    if (year < 2009 || year > 9999)
    {
        std::cout << "Error: Year Not Valid" << std::endl;
        return (false);      
    }
    return (true);
}

bool isValidMonth(std::string date)
{
    int month = std::atoi(date.substr(5, 2).c_str());
    if (month < 1 || month > 12)
    {
        std::cout << "Error: Month Not Valid" << std::endl;
        return (false);
    }
    return (true);
}

bool isValisDay(std::string date)
{
    int day = std::atoi(date.substr(8, 2).c_str());
    int mounth = std::atoi(date.substr(5, 2).c_str());
    if (mounth == 2)
    {
        if (day < 1 || day > 29)
        {
            std::cout << "Mouth 2: Should be between 1 and 29" << std::endl;
            return (false);
        }
    }
    else 
    {
        if (day < 1 || day > 31)
        {
            std::cout << "Error: Day Not Valid" << std::endl;
            return (false);
        }
    }
    return (true);
}

bool isValidValueOfBitcoin(std::string value)
{
    double val = std::atof(value.c_str());
    if (val < 0 || val > 1000)
    {
        if (val < 0)
            std::cout << "Error: not a positive number" << std::endl;
        else
            std::cout << "Error: too large a number" << std::endl;
        return (false);   
    }
    return (true);
}

double BitcoinExchange::findBitcoinPrice(std::string key)
{
    std::map<std::string, std::string>::iterator it;

    it = my_data.lower_bound(key);
    return (std::atof((*it).second.c_str()));
}

void BitcoinExchange::parse_data (std::string filename)
{
    std::ifstream inputFile(filename);
    std::string line;
    std::string key;
    std::string value;

    if (!inputFile.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return ;
    }
    getline(inputFile, line);
    if (line != "date | value")
    {
        std::cout << "Error: wrong file format" << std::endl;
        return ;
    }
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        if (std::getline(iss, key, '|') && std::getline(iss, value))
        {

            size_t start = key.find_first_not_of("\t\n\v\f\r ");
            size_t end = key.find_last_not_of("\t\n\v\f\r ");
            key = key.substr(start, end - start + 1);
            start = value.find_first_not_of("\t\n\v\f\r ");
            end = value.find_last_not_of("\t\n\v\f\r ");
            value = value.substr(start, end - start + 1);
        
            
            if (key.length() == 0 || value.length() == 0)
            {
                if (key.length() == 0)
                    std::cout << "Error: bad input => " << key << std::endl;
                if (value.length() == 0)
                    std::cout << "Error: bad input => " << value << std::endl;
                continue ;
            }

            if (!check_key(key)
                || !check_value(value)
                    || !isValidDateFormat(key)
                        || count_dot(value) > 1
                            || !isValidYear(key)
                                || !isValidMonth(key)
                                    || !isValisDay(key)
                                        || !isValidValueOfBitcoin(value))
                continue ;
            else
            {
                double price = findBitcoinPrice(key);
                double result = std::atof(value.c_str()) * price;
                std::cout << key << " => "  << value << " = " << result << std::endl;
                continue ;
            }
        }
        else
            std::cout << "Error: bad input => " << key << std::endl;
    }
}

// void BitcoinExchange::print_data()
// {
//     for (std::map<std::string, std::string>::iterator it = my_data.begin(); it != my_data.end(); it++)
//     {
//         std::cout << it->first << " : " << it->second << std::endl;
//     }
// }