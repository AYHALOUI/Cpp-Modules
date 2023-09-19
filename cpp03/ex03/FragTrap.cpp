/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:40:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 18:04:51 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "Copy Constructor called from FragTrap" << std::endl;
    (*this) = copy;
}

FragTrap& FragTrap::operator = (const FragTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " wants to high fives guys!" << std::endl;
}