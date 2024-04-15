/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:30:18 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 01:33:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    (void)av;
    (void)ac;
    try
    {
        if (ac != 2)
            throw std::invalid_argument("Number of args are not Valid");
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}