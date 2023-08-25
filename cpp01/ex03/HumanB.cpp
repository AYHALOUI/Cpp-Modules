/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:23:44 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 14:36:42 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
}


Weapon HumanB::getWeapon()
{
	return (this->weapon);
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanB::attack()
{
	std::cout << "<" 
		<< this->name << ">" " attacks with their <" 
		<< this->weapon.getType() << ">" << std::endl;
}



