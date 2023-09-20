/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:49:13 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 20:27:28 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "string"
#include "iostream"
#include "AMateria.hpp"

class Cure : public AMateria
{
	
	public:
		Cure();
		Cure(const Cure &copy);
		Cure &operator = (const Cure &copy);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif