/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:40:21 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 15:15:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor called from WrongAnimal" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy constructor called from WrongAnimal" << std::endl;
    (*this) = copy;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &copy)
{
    std::cout << "Assigment operator called from WrongAnimal" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called from WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}