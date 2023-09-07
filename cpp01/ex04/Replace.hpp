/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:45:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 21:32:33 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>


class Replace
{
	private:
		std::string fileName;
		std::string s1;
		std::string s2;

	public:
		Replace(std::string fileName, std::string s1, std::string s2);
		void myReplace(std::string &line);
		std::string getFileName();
		~Replace();
};


#endif