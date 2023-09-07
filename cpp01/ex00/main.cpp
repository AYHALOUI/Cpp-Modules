/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/05 20:17:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie(std::string name);
void randomChump(std::string name);

// void ff()
// {
// 	system("leaks zombie");
// }

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