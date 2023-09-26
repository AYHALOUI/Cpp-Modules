/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:48:14 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 18:51:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria()
{
    std::cout << "Default constructor called from Ice" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice &copy):AMateria(copy)
{
    std::cout << "Copy constructor called from Ice" << std::endl;
}

Ice &Ice::operator = (const Ice &copy)
{
    std::cout << "Assigment operator called from Ice" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Destructor called from Ice" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}