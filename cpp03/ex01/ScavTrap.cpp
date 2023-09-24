/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 21:24:54 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/********************************************************************************/
// Orthodox Canonical Form
ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "Default constructor called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "Copy Constructor called from ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "Assigment operator called from ScavTrap" << std::endl;
	if (this == &copy)
		return (*this);
	this->clap_Name = copy.clap_Name;
	this->clap_hitPoints = copy.clap_hitPoints;
	this->clap_energyPoints = copy.clap_energyPoints;
	this->clap_attackDamage = copy.clap_attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called from scavTrap" << std::endl;
}
/********************************************************************************/

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Constructor Parameterized called from ScavTrap" << std::endl;	
}

void ScavTrap::attack(const std::string& target)
{
	if (this->clap_hitPoints > 0 && this->clap_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->clap_Name << " attack " << target << ", causing " << this->clap_attackDamage << " points of damage!" << std::endl;
		this->clap_energyPoints --;
	}
	else
		std::cout << "ScavTrap " << this->clap_Name << " can't attack. Not enough energy or hit points." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->clap_Name << " is now in Gate keeper mode." << std::endl;
}