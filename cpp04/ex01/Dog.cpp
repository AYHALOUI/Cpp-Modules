/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 15:08:12 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy):Animal(copy)
{
    std::cout << "Copy constructor called from Dog" << std::endl;
    this->brain = new Brain();
    (*this) = copy;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Assignation operator called from Dog" << std::endl;
    Animal::operator = (copy);
    if (this != &copy)
        *(this->brain) = *(copy.brain);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor called from Dog" << std::endl;
    delete this->brain;
}


void Dog::makeSound() const
{
    std::cout << "Dog makeSound called" << std::endl;
}