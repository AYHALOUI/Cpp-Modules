/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 16:55:53 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/********************************************************************************/
// Orthodox Canonical Form
ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "Default constructor called from ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &copy)
{
	if (this == &copy)
		return (*this);
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "Copy Constructor called from ScavTrap" << std::endl;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called from scavTrap" << std::endl;
}
/********************************************************************************/

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode." << std::endl;
}