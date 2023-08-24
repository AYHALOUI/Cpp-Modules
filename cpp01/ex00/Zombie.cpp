/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:23 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 13:24:28 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie Created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie Destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return (this->name);
}

void Zombie::announce()
{
    if (!this->name.compare("Foo"))
        std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout 
        << "<" << this->name << ">:" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
