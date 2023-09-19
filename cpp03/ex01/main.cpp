/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 12:40:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	// ScavTrap a("ahaloui");
	// ScavTrap b("bhaloui");
	// ScavTrap c(a);

	// a.attack("bhaloui");
	// b.takeDamage(20);
	// b.attack("ahaloui");
	// a.takeDamage(20);
	// a.guardGate();
	// b.guardGate();
	// c.guardGate();

	// ScavTrap a("ahaloui");
	ClapTrap *ptr = new ScavTrap("ayemen");

	ptr->attack("hallui");

	delete ptr;
	return (0);
}