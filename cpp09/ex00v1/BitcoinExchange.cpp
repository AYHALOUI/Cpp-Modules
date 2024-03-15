#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : my_data()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this == &rhs)
        return *this;
    this->my_data = rhs.my_data;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::read_data_db(std::string filename)
{
    std::cout << "Reading data from " << filename << std::endl;
    std::ifstream dataFile(filename);
    std::string line;

    std::string key, value;
    if (!dataFile)
    {
        std::cout << "Error: could not open input file." << std::endl;
        return ;
    }
    std::getline(dataFile, line);
    while (getline(dataFile, line))
    {
        std::stringstream ss;
        ss << line;
        std::getline(ss, key, ',');
        std::getline(ss, value, ',');
        my_data.insert(make_pair(key, value));
    }
    dataFile.close();
}

std::map<std::string, std::string> BitcoinExchange::getBitcoinValues() const
{
    return my_data;
}


