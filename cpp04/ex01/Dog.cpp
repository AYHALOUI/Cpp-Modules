/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 17:23:10 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    this->type = "Dog";
    this->ptrBrain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Copy constructor called from Dog" << std::endl;
    this->ptrBrain = new Brain();
    (*this) = copy;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Assigment operator called from Dog" << std::endl;
    if (this == &copy)
        return (*this);
    *(this->ptrBrain) = *(copy.ptrBrain);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor called from Dog" << std::endl;
    delete (this->ptrBrain);
}


void Dog::makeSound() const
{
    std::cout << "\033[31m" << "Dog Barks" << "\033[0m" << std::endl;
}