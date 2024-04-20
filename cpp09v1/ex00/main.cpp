/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:34 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/20 23:23:58 by ahaloui          ###   ########.fr       */
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
    exchange.read_data_db("data.csv");
    exchange.parse_data(av[1]);
    // std::map<std::string, std::string> data = exchange.getBitcoinValues();
    // exchange.print_data();
    return 0;
}