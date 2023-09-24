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

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "Copy Constructor called from ScavTrap" << std::endl;	
}

ScavTrap& ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "Assigment operator called from ScavTrap" << std::endl;
	if (this == &copy)
		return (*this);
	ClapTrap::operator=(copy);
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

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->clap_Name << " is now in Gate keeper mode." << std::endl;
}