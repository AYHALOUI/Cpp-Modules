/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:48:45 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 20:45:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice(): AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
} 

Ice::Ice(const Ice &copy): AMateria(copy)
{
	// std::cout << "Ice Copy constructor called" << std::endl;
}

Ice &Ice::operator = (const Ice &copy)
{
	// std::cout << "Ice Assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	AMateria::operator = (copy);
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}