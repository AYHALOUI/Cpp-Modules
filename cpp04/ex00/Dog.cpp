/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 17:18:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Copy constructor called from Dog" << std::endl;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Assigment operator called from Dog" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor called from Dog" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "\033[31m" << "Dog Barks" << "\033[0m" << std::endl;
}