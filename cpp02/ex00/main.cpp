/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/14 17:29:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// class Myclass
// {
// 	public:
// 		int value;

// 	Myclass &operator = (const Myclass &copy)
// 	{
// 		if (this == &copy)
// 			return (*this);
// 		std::cout << "assigment operator called\n";
// 		this->value = copy.value;
// 		return (*this);
// 	}	  

// 	Myclass(int val):value(val)
// 	{
		
// 	}
// };

int main()
{
	std::cout << "****************\n";
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "****************\n";
	return (0);
}