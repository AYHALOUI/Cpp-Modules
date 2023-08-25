/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:23:55 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 14:35:44 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon weapon;
		std::string name;
		
	public:
		HumanB(std::string name);
		
		std::string getName();
		void setName(std::string name);
		void setWeapon(Weapon weapon);
		Weapon getWeapon();
		void attack();
};

#endif