/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:42:08 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 14:53:51 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		
		void setName(std::string name);
		std::string getName();
		
		void announce(void);

};
Zombie* zombieHorde(int N, std::string name);