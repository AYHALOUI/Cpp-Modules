/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 13:07:37 by ahaloui          ###   ########.fr       */
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
		
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);

};