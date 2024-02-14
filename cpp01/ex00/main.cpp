/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/10 16:03:43 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("Zombie 1");
	zombie1.announce();

	Zombie *zombie2 = newZombie("Zombie 2");
	zombie2->announce();
	randomChump("Foo");
	
	delete zombie2;
	return (0);
}
