/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:38:50 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 17:04:01 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        Harl().complain(av[1]);
    else
        std::cout << "Usage: ./complain [DEBUG|INFO|WARNING|ERROR]" << std::endl;
}