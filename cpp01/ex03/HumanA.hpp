/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:23:50 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 14:59:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		Weapon& weapon;
		std::string name;

	public:
		HumanA();
		HumanA(std::string& name, Weapon& weapon);
		void setName(std::string name);
		void setWeapon(Weapon weapon);

		std::string getName();
		Weapon getWeapon();
		void attack();
	
};
#endif