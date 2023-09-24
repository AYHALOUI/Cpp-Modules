/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:13 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 12:41:42 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"
#include "string"

class ClapTrap
{
	protected:
		std::string clap_Name;
		int clap_hitPoints;
		int clap_energyPoints;
		int clap_attackDamage;
		
	public:
		/*************************************/
		// Orthodox Canonical Form
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator = (const ClapTrap &copy);
		virtual ~ClapTrap();

		/*************************************/
		ClapTrap(std::string name);
		/*************************************/
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		/*************************************/
		void printInfo();	
};

#endif
