/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 21:40:24 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "**********************************************" << std::endl;
	ClapTrap claptrap("amine");
    std::cout << "**********************************************" << std::endl;
    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Enemy");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);
    std::cout << "**********************************************" << std::endl;
}