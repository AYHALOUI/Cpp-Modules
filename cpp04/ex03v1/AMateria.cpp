/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:33:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 18:46:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor called from AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "Copy constructor called from AMateria" << std::endl;
	(*this) = copy;
}

AMateria& AMateria::operator = (const AMateria &copy)
{
	std::cout << "Copy constructor called from AMateria" << std::endl;
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout <<  "Destructor called from AMateria" << std::endl;
}
AMateria::AMateria(std::string const &type):type(type)
{
	
}

std::string const & AMateria::getType() const
{
	return (this->type);
}



