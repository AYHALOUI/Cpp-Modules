/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:12:12 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 14:41:17 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon& weapon): weaponREF(weapon), name(name)
{
    
}

void HumanA::attack()
{
    std::cout << this->name <<" attacks with their " 
	<< this->weaponREF.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}