/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:34 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/20 21:47:36 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    BitcoinExchange exchange;
    exchange.read_data_db(av[1]);
    std::map<std::string, std::string> data = exchange.getBitcoinValues();
    std::map<std::string, std::string>::iterator it = data.begin();
    while (it != data.end())
    {
        std::cout << it->first << " : " << it->second << std::endl;
        it++;
    }
    return 0;
}