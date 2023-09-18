/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 15:30:42 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("ahaloui");
	ScavTrap b("bhaloui");
	ScavTrap c(a);

	a.attack("bhaloui");
	b.takeDamage(20);
	b.attack("ahaloui");
	a.takeDamage(20);
	a.guardGate();
	b.guardGate();
	c.guardGate();
	return (0);
}