/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:40:04 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 16:41:49 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &copy)
{
    std::cout << "WrongCat Assigment operator called" << std::endl;
    WrongAnimal::operator = (copy);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called from WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound called" << std::endl;
}

