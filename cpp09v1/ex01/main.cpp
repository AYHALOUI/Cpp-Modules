/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:57 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/21 18:20:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return (1);
    }
    RPN rpn;
    std::cout << rpn.calculateRPN(av[1]) << std::endl;
    return 0;
}