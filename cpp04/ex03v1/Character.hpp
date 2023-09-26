/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:15:21 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 18:56:04 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *equippedMateria[4];
		std::string name;
		
	public:
		Character();
		Character(const Character &copy);
		Character &operator = (const Character &copy);
		~Character();

		Character(std::string const& name);
};



#endif