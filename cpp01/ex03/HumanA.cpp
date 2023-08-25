/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:23:48 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 15:00:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string& name, Weapon& wen): weapon(wen)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return (this->name);
}


void HumanA::setName(std::string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << "<" 
		<< this->name << ">" " attacks with their <" 
		<< this->weapon.getType() << ">" << std::endl;
}



