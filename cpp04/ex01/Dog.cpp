/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 18:35:16 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    Animal::operator = (copy);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->brain;
}


void Dog::makeSound() const
{
    std::cout << "Dog makeSound called" << std::endl;
}