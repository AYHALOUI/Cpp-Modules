/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:44:32 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/10 16:04:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << " Created" << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<< this->name << " Created" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
}

