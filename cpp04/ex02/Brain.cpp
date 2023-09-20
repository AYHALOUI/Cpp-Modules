/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:35:23 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 18:33:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): ides()
{
	std::cout << "Default constructor called from Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called from Brain" << std::endl;
	(*this) = copy;
}

Brain& Brain::operator = (const Brain &copy)
{
	std::cout << "Assigment operator called from Brain" << std::endl;
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < 100; i++)
		this->ides[i] = copy.ides[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called from Brain" << std::endl;
}

// Brain::Brain(std::string ideas[100])
// {
// 	std::cout << "Parametric constructor called from Brain" << std::endl;
// 	for (size_t i = 0; i < 100; i++)
// 		this->ides[i] = ideas[i];
// }