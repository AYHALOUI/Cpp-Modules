
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, std::string> data_bitcoin;
    
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &copy);
        ~BitcoinExchange();

        /* getters */
        std::map<std::string, std::string> getDataBitcoin() const;
        
        /* member functions: parsing */
        bool read_data_of_bitcoin(std::string file_name);
        bool parsing_input_file(std::string file_name);
        std::string remove_withe_spaces (std::string str);
        void print_error (std::string error);

        /* only Key */
        bool check_key (std::string key);
        bool is_date_valid_form (std::string key);
        bool is_valid_year (std::string key);
        bool is_valid_mounth (std::string key);
        bool is_valid_day (std::string key);
        bool is_valid_key_parsing (std::string key);

        /* only Value */
        int check_value (std::string value);
        int count_dot (std::string value);
        int is_valid_value_of_bitcoin (std::string value);
        bool is_valid_value_parsing (std::string key);

        bool is_pipe_found (std::string str);

        /* calculate bitcoin value */
        double find_price_bitcoin(std::string key);
        void calculate_bitcoin_value(std::string key, std::string value);
};
#endif