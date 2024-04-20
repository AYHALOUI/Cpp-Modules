/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/20 21:46:22 by ahaloui          ###   ########.fr       */
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
        // std::map<std::string, std::string> getBitcoinValues() const;
        std::map<std::string, std::string> getBitcoinValues() const;
};
#endif