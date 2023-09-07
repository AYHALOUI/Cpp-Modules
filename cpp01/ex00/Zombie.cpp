/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:44:32 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/05 20:01:49 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<< this->name << " Created" << std::endl;
}

void Zombie::announce(void)
{
    if (this->name == "Foo")
        std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
    else
         std::cout << "<" << this->name << ">:" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
}

