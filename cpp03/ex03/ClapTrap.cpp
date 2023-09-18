/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:03 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 16:09:44 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********************************************************************************/
// Orthodox Canonical Form
ClapTrap::ClapTrap():name(""), hitPoints(0), energyPoints(0), attackDamage(0)
{
	std::cout << "Default constructor Called" << std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	(*this) = copy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &copy)
{
	if (this == &copy)
		return (*this);
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
/*******************************************************************************/

ClapTrap::ClapTrap(std::string name):name(name), hitPoints(100), energyPoints(100), attackDamage(30)
{
	std::cout << "Constructor Parameterized called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " can't attack. No hit points or energy points left!" << std::endl;
		return ;
	}
	this->energyPoints --;
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
	if (!this->hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " is already destroyed!" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints)
	{
		std::cout << "ClapTrap can't be repaired," << this->name << " is already destroyed!" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " hit points!" << std::endl;
	if (this->hitPoints > 100)
		this->hitPoints = 100;
	this->energyPoints --;
}
/*******************************************************************************/

void ClapTrap::printInfo()
{
	std::cout << "\n******************************" << std::endl;
	std::cout <<"name: " <<this->name << std::endl;
	std::cout <<"hitPoints: " << this->hitPoints << std::endl;
	std::cout << "energyPoints: " << this->energyPoints << std::endl;
	std::cout << "attackDamage:" << this->attackDamage << std::endl;
	std::cout << "******************************" << std::endl;
}