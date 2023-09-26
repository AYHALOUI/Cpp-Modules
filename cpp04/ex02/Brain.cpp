/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:20:39 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 14:34:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called from Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called from Brain" << std::endl;
	(*this) = copy;
}

Brain &Brain::operator = (const Brain &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called from Brain" << std::endl;
}