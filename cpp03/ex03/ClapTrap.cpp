/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:03 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 18:03:25 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********************************************************************************/
// Orthodox Canonical Form
ClapTrap::ClapTrap():clap_Name(""), clap_hitPoints(0), clap_energyPoints(0), clap_attackDamage(0)
{
	std::cout << "Default constructor Called from ClapTrap" << std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called from ClapTrap" << std::endl;
	(*this) = copy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &copy)
{
	if (this == &copy)
		return (*this);
	this->clap_Name = copy.clap_Name;
	this->clap_hitPoints = copy.clap_hitPoints;
	this->clap_energyPoints = copy.clap_energyPoints;
	this->clap_attackDamage = copy.clap_attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called from ClapTrap" << std::endl;
}
/*******************************************************************************/

ClapTrap::ClapTrap(std::string name):clap_Name(name), clap_hitPoints(100), clap_energyPoints(100), clap_attackDamage(30)
{
	std::cout << "Constructor Parameterized called from ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->clap_hitPoints || !this->clap_energyPoints)
	{
		std::cout << "ClapTrap " << this->clap_Name << " can't attack. No hit points or energy points left!" << std::endl;
		return ;
	}
	this->clap_energyPoints --;
	std::cout << "ClapTrap " << this->clap_Name << " attack " << target << ", causing " << this->clap_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
	if (!this->clap_hitPoints)
	{
		std::cout << "ClapTrap " << this->clap_Name << " is already destroyed!" << std::endl;
		return ;
	}
	this->clap_hitPoints -= amount;
	if (this->clap_hitPoints < 0)
		this->clap_hitPoints = 0;
	std::cout << "ClapTrap " << this->clap_Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->clap_hitPoints)
	{
		std::cout << "ClapTrap can't be repaired," << this->clap_Name << " is already destroyed!" << std::endl;
		return ;
	}
	this->clap_hitPoints += amount;
	std::cout << "ClapTrap " << this->clap_Name << " is repaired for " << amount << " hit points!" << std::endl;
	if (this->clap_hitPoints > 100)
		this->clap_hitPoints = 100;
	this->clap_energyPoints --;
}
/*******************************************************************************/

void ClapTrap::printInfo()
{
	std::cout << "\n******************************" << std::endl;
	std::cout <<"name: " <<this->clap_Name << std::endl;
	std::cout <<"hitPoints: " << this->clap_hitPoints << std::endl;
	std::cout << "energyPoints: " << this->clap_energyPoints << std::endl;
	std::cout << "attackDamage:" << this->clap_attackDamage << std::endl;
	std::cout << "******************************" << std::endl;
}