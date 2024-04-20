/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:05 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/20 23:27:38 by ahaloui          ###   ########.fr       */
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
        std::getline(iss, key, ':');
        std::getline(iss, value, ':');
        my_data[key] = value;
    }
    dataFile.close();
    // std::cout << "Data read from file" << std::endl;
}

std::map<std::string, std::string> BitcoinExchange::getBitcoinValues() const
{
    return my_data;
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

    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        std::getline(iss, key, ':');
        std::getline(iss, value, ':');
        if (my_data.find(key) != my_data.end())
        {
            my_data[key] = value;
        }
    }
}

void BitcoinExchange::print_data()
{
    for (std::map<std::string, std::string>::iterator it = my_data.begin(); it != my_data.end(); it++)
    {
        std::cout << it->first << " : " << it->second << std::endl;
    }
}