/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:49:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 12:02:32 by ahaloui          ###   ########.fr       */
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
		Zombie();
		Zombie(std::string name);
        ~Zombie();
		void announce( void );
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif