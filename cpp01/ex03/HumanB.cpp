/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:13:02 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 13:55:51 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) 
{
	this->name = name;
}
void HumanB::attack()
{
    std::cout << this->name << " attacks with their " 
	<< ((this->typePTR)? this->typePTR->getType(): "") << std::endl;
}

void HumanB::setWeapon(Weapon &typePTR)
{
	this->typePTR = &typePTR;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}
