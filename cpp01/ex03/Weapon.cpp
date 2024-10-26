/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:08:21 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 20:52:21 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
std::string& Weapon::getType()
{
    std::string &typeREF = this->type;
    return typeREF;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}