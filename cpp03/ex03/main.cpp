/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 16:52:48 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("ahaloui");
	FragTrap b("bhaloui");
	FragTrap c(a);
	
	a.attack("bhaloui");
	b.takeDamage(20);
	b.attack("ahaloui");
	a.takeDamage(20);
	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();
	
	return (0);
}