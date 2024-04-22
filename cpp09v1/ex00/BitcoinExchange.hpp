/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/22 15:10:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <vector>
# include <map>
# include <algorithm>
# include <cmath>
# include <ctime>
# include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string , std::string> my_data;

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &rhs);
        ~BitcoinExchange();

        void read_data_db(std::string filename);
        std::map<std::string, std::string> getBitcoinValues() const;

        void parse_data(std::string data);
        // int check_date(std::string date);
        //void print_data();

        double findBitcoinPrice(std::string key);
        

};
#endif