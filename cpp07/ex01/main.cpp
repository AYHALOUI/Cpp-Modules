/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:09:44 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/16 14:43:27 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<< ( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}

// template <typename T, typename F>
// class Test
// {
//     private:
//         T a;
//         T b;
//     public:
//         Test()
//         {
            
//         }
// };


// int main()
// {
//     int intArry[5] = {1, 2, 3, 4, 5};
//     std::cout << "Array of integers: " << std::endl;
    
//     iter(intArry, 5, printArrayElement<int>);
//     std::cout << "* ---------------------------------------- *" << std::endl;

//     double doubleArray[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
//     std::cout << "Array of Double: " << std::endl;
//     iter(doubleArray, 5, printArrayElement<double>);
//     std::cout << "* ---------------------------------------- *" << std::endl;

//     char charArray[5] = {'a', 'b', 'c', 'd', 'e'};
//     std::cout << "Array of Char: " << std::endl;
    
//     iter(charArray, 5, printArrayElement<char>);
//     std::cout << "* ---------------------------------------- *" << std::endl;

//     std::string strArray[] = {"Hello", "ahaloui", "from", "another", "world"};
//     std::cout << "Array of String: " << std::endl;
//     iter(strArray, 5, printArrayElement<std::string>);
//     std::cout << "* ---------------------------------------- *" << std::endl;

//     //Test<int, double> a;
// }