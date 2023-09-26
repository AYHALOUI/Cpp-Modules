/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:16:07 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 18:59:15 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Default Conctructor called from Character" << std::endl;
	for ( int i = 0; i < 4; i++)
		this->equippedMateria[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Copy Conctructor called from Character" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (copy.equippedMateria[i])
			this->equippedMateria[i] = copy.equippedMateria[i]->clone();
	}
	(*this) = copy;
}

Character& Character::operator = (const Character &copy)
{
	std::cout << "Assigment operator called from Character" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		*(this->equippedMateria[i]) = *(copy.equippedMateria[i]);
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor called from Character" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->equippedMateria[i])
			delete (this->equippedMateria[i]);
}