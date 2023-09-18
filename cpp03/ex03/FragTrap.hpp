/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:06:56 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 16:07:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator = (const FragTrap &copy);
		~FragTrap();

		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif