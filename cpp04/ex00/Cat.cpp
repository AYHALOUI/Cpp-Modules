/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 17:38:02 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): Animal()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Cat Assigment operator called" << std::endl;
    Animal::operator = (copy);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}
