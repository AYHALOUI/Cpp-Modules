/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 21:40:18 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout <<"****************************************" <<std::endl;
	ClapTrap claptrap("aymene");
    std::cout <<"****************************************" <<std::endl;
    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    
    std::cout <<"****************************************" <<std::endl;
    ScavTrap scavtrap("simo");
    std::cout <<"****************************************" <<std::endl;
    scavtrap.attack("Enemy");
    scavtrap.takeDamage(20);
    scavtrap.guardGate();
	
    std::cout <<"****************************************" <<std::endl;
	return (0);
}