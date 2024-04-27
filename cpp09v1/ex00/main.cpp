/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:12:34 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/25 18:20:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    if (ac != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    BitcoinExchange exchange;
    exchange.read_data_db("data.csv");
    std::map<std::string, std::string> data = exchange.getBitcoinValues();
    for (std::map<std::string, std::string>::iterator ite = data.begin(); ite != data.end(); ite++)
        std::cout << ite->first << "," << ite->second << std::endl; 
    exchange.parse_data(av[1]);
    //std::map<std::string, std::string> data = exchange.getBitcoinValues();
    //exchange.print_data();

    // initialize container
    // std::map<int, int> mp;
 
    // insert elements in random order
    // mp.insert(std::make_pair(1, 10));
    // // mp.insert(std::make_pair(2, 20));
    // //  mp.insert(std::make_pair(2, 100));
    // mp.insert(std::make_pair(3, 30));
    // mp.insert(std::make_pair(4, 40));
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     std::cout << (*it).first << " " << (*it).second << std::endl;
    // }
    
 
    // when 2 is present
    // auto it = mp.lower_bound(2);
    // std::cout << "The lower bound of key 2 is ";
    // std::cout << (*it).first << " " << (*it).second << std::endl;
 
    // // when 3 is not present
    // // points to next greater after 3
    // it = mp.lower_bound(3);
    // std::cout << "The lower bound of key 3 is ";
    // std::cout << (*it).first << " " << (*it).second;
 
    // // when 6 exceeds
    // it = mp.lower_bound(6);
    // std::cout << "\nThe lower bound of key 6 is ";
    // std::cout << (*it).first << " " << (*it).second;
    return 0;
}