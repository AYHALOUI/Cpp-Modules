/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:23 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 12:55:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name)
{
    this->name = name;
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

Zombie* Zombie:: newZombie(std::string name)
{
    Zombie *newZombie = new Zombie(name);
    return (newZombie);
}

void Zombie::randomChump(std::string name)
{
    Zombie *newZombie = new Zombie(name);
    (*newZombie).announce();
}
