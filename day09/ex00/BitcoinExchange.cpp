#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    (*this) = copy;
}


BitcoinExchange& BitcoinExchange::operator= (const BitcoinExchange &copy)
{
    if (this == &copy)
        return (*this);
    this->data_bitcoin = copy.data_bitcoin;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

/***************************************************/
std::map<std::string, std::string> BitcoinExchange::getDataBitcoin() const
{
    return (this->data_bitcoin);
}

bool BitcoinExchange::read_data_of_bitcoin (std::string file_name)
{
    std::ifstream data_file(file_name);
    if (!data_file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (false);
    }

    std::string line;
    std::string key;
    std::string value;

    while (std::getline(data_file, line))
    {
        std::stringstream string_stream(line);
        std::getline(string_stream, key, ',');
        std::getline(string_stream, value);
        this->data_bitcoin.insert(std::make_pair(key, value));
    }
    std::map<std::string, std::string>::iterator ite =  data_bitcoin.end();
    this->data_bitcoin.erase(--ite);
    data_file.close();
    return (true);
}

std::string BitcoinExchange::remove_withe_spaces (std::string str)
{
    if (str.empty())
        return "";
    size_t start = str.find_first_not_of("\t\n\v\f\r ");
    size_t end = str.find_last_not_of("\t\n\v\f\r ");
    // std::cout << "[" <<end - start << "]" << std::endl;

    // std::cout << "end: "<< end << std::endl;
    // std::cout << "start: "<< start << std::endl;
    // if ((end - start) == 0)
    // {
    //     // std::cout << "helli\n";
    //     return "";
    // }
    if (start == std::string::npos || end == std::string::npos)
        return "";
    return (str.substr(start, (end - start) + 1));
}


void BitcoinExchange::print_error (std::string error)
{
    std::cout << "Error: " << error << std::endl;
}

bool BitcoinExchange::check_key (std::string key)
{
    for (size_t i = 0; i < key.length(); i++)
    {
        if (!isdigit(key[i]) && key[i] != '-')
            return (false);
    }
    return (true);
}

bool BitcoinExchange::is_date_valid_form (std::string key)
{
    if (key.length() != 10)
        return (false);
    if (key[4] != '-' || key[7] != '-')
        return (false);
    for (size_t i = 0; i < key.length(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(key[i]))
            return (false);
    }
    return (true);
}
/************************************************************************/
bool BitcoinExchange::is_valid_year (std::string key)
{
    int year;

    year = std::atoi (key.substr(0, 4).c_str());
    if (year < 2009 || year > 9999)
        return (false);      
    return (true);
}

bool BitcoinExchange::is_valid_mounth (std::string key)
{
    int month;

    month = std::atoi(key.substr(5, 2).c_str());
    if (month < 1 || month > 12)
        return (false);
    return (true);
}

bool BitcoinExchange::is_valid_day (std::string key)
{
    int day;
    int month;

    day = std::atoi(key.substr(8, 2).c_str());
    month = std::atoi(key.substr(5, 2).c_str());
    if (month == 2)
    {
        if (day < 1 || day > 29)
            return (false);
    }
    else
    {
        if (day < 1 || day > 31)
            return (false);
    }
    return (true);
}

bool BitcoinExchange::is_valid_key_parsing (std::string key)
{
    if (!check_key(key) || !is_date_valid_form(key)
        || !is_valid_year(key) || !is_valid_mounth(key)
            || !is_valid_day(key))
    {
        print_error ("Date Not Valid");
        return (false);
    }
    return (true);
}
/************************************************************************/

int BitcoinExchange::check_value (std::string value)
{
    double val;

    val = std::atof(value.c_str());
    if (val < 0)
        return (1);
    for (size_t i = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]) && value[i] != '.')
            return (2);
    }
    return (0);
}

int BitcoinExchange::count_dot (std::string value)
{
    int count = 0;

    for (size_t i = 0; i < value.length(); i++)
    {
        if (value[i] == '.')
            count++;
    }
    return (count);
}

int BitcoinExchange::is_valid_value_of_bitcoin (std::string value)
{
    double val;

    val = std::atof(value.c_str());
    if (val < 0 || val > 1000)
    {
        if (val < 0)
            return (-9);
        else
            return (9);   
    }
    return (true);
}

bool BitcoinExchange::is_valid_value_parsing (std::string value)
{
    // if ((check_value(value) == 1))
    // {
    //     print_error("not a positive number");
    //     return (false);
    // }
    if ((check_value(value) == 2) || (count_dot(value) > 1))
    {
        print_error("Value Not Valid");
        return (false);
    }
    if (is_valid_value_of_bitcoin(value) == -9)
    {
        print_error("not a positive number");
        return (false);
    }
    if (is_valid_value_of_bitcoin(value) == 9)
    {
        print_error("too large a number");
        return (false);
    }
    return (true);
}
/**************************************************************************/

bool BitcoinExchange::is_pipe_found(std::string str)
{
    return (str.find(" | ") != std::string::npos);
}


double BitcoinExchange::find_price_bitcoin(std::string key)
{
    double bitcoin_value;
    std::map<std::string, std::string>::iterator iterator;

    iterator = this->data_bitcoin.lower_bound(key);
    // iterator = std::lower_bound(this->data_bitcoin.begin(), this->data_bitcoin.end(), key);
    bitcoin_value = std::atof((*iterator).second.c_str());
    return (bitcoin_value);
}

void BitcoinExchange::calculate_bitcoin_value(std::string key, std::string value)
{
    double bitcoin_value;
    double result;

    bitcoin_value = find_price_bitcoin(key);
    result = std::atof(value.c_str()) * bitcoin_value;
    std::cout << key << " => "  << value << " = " << result << std::endl;
}

bool BitcoinExchange::parsing_input_file(std::string file_name)
{
    std::fstream input_file(file_name);
    if (!input_file.is_open())
    {
        print_error("could not open file");
        return (false);
    }
    
    std::string line;
    std::string key;
    std::string value;

    std::getline(input_file, line);
    std::stringstream string_stream(line);
    std::getline(string_stream, key, '|');
    std::getline(string_stream, value);

    if ((key != "date ") || (value != " value"))
    {
        print_error("first line input file");
        return (false);
    }
    while (std::getline(input_file, line))
    {
        // if (!is_pipe_found(line))
        // {
        //     print_error("bad input 1 ");
        //     continue;
        // }
        std::stringstream string_stream(line);
        if (std::getline(string_stream, key, '|') 
            && std::getline(string_stream, value))
        {
            key = remove_withe_spaces(key);
            value = remove_withe_spaces(value);
            if (key.empty() || value.empty())
            {
                std::cout << "bad input" << std::endl;
                continue;
            }

            if (!is_valid_key_parsing(key)
                    || !is_valid_value_parsing(value))
                continue;
            else
                calculate_bitcoin_value(key, value);
        }
        else
            std::cout << "bad input" << std::endl;
    }
    return (true);
}