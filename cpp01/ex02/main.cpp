/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 13:52:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{	

	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;
	
	std::cout << "*************************" << std::endl;
	std::cout << "Adress name: " << &name << std::endl;
	std::cout << "Adress stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress stringREF: "<< &stringREF << std::endl;

	std::cout << "*************************" << std::endl;

	std::cout << "Value of name: "<< name << std::endl;
	std::cout << "Value of stringPTR: "<< *stringPTR << std::endl;
	std::cout << "Value of stringREF: "<< stringREF << std::endl;
	return (0);
	
}