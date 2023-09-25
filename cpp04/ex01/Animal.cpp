/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:12:10 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 15:05:45 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Unkonwn")
{
    std::cout << "Default constructor called from Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor called from Animal" << std::endl;
    (*this) = copy;
}

Animal &Animal::operator =(const Animal &copy)
{
    std::cout << "Assigment operator called from Animal" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called from Animal" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}
