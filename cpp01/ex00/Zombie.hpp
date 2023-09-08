/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:49:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 14:29:17 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie(std::string name);
        ~Zombie();
		void announce( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif