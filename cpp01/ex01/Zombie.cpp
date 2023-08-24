/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:41:44 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 14:59:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<< this->name << " Created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
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
