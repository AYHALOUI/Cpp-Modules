/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 16:23:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// class MyClass {
	
// public:
//     int somme(int a, int b) {
//         return a + b;
//     }

//     double somme(double a, double b) {
//         return a + b;
//     }

//     int somme(int a, int b, int c) {
//         return a + b + c;
//     }
// };

// int main() {
//     MyClass obj;

//     int resultInt = obj.somme(5, 10);       // Calls the first somme function
//     double resultDouble = obj.somme(3.5, 2.7);  // Calls the second somme function
//     int resultInt3 = obj.somme(1, 2, 3);    // Calls the third somme function

//     std::cout << "Result of sum (int): " << resultInt << std::endl;
//     std::cout << "Result of sum (double): " << resultDouble << std::endl;
//     std::cout << "Result of sum (int): " << resultInt3 << std::endl;

//     return 0;
// }

class Marks
{
	private:
		int intmark;
		int exrmark;

	public:
		Marks()
		{
			this->exrmark = 0;
			this->intmark = 0;
		}

		Marks(int intmark, int extmark)
		{
			this->exrmark = extmark;
			this->intmark = intmark;
		}
		
		Marks operator + (Marks m)
		{
			std::cout << "hello\n";
			Marks temp;

			temp.intmark = this->intmark + m.intmark;
			temp.exrmark = this->exrmark + m.exrmark;
			return (temp);
		}

		void display()
		{
			std::cout << this->exrmark << std::endl;
			std::cout << this->intmark << std::endl;
		}
};


int main()
{
	Marks m1(10, 20), m2(30, 40);
	Marks m3 = m1 + m2;
	(void)m3;
	// m3.display();
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	
	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	const int x = 2;
	std::cout << x;
	std::cout << "****************\n";
	return (0);
}