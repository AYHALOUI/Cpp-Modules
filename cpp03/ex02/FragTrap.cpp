/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:40:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 12:07:39 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "Default constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
    std::cout << "Copy Constructor called from FragTrap" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap &copy)
{
    std::cout << "Assigment operator called from FragTrap" << std::endl;
    if (this == &copy)
        return (*this);
    this->clap_Name = copy.clap_Name;
    this->clap_hitPoints = copy.clap_hitPoints;
    this->clap_energyPoints = copy.clap_energyPoints;
    this->clap_attackDamage = copy.clap_attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "Constructor Parameterized called from FragTrap" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (this->clap_hitPoints > 0 && this->clap_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->clap_Name << " attack " << target << ", causing " << this->clap_attackDamage << " points of damage!" << std::endl;
		this->clap_energyPoints --;
	}
	else
		std::cout << "FragTrap " << this->clap_Name << " can't attack. Not enough energy or hit points." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->clap_Name << " wants to high fives guys!" << std::endl;
}