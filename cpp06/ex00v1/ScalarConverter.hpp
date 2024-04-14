/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:27:41 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/14 23:11:24 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <limits>


class ScalarConverter
{
    private:

        std::string input;
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);

        ScalarConverter(const std::string& input);
        
        ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();

    public:

        std::string getInput() const;

        static void convert(const std::string input);
        
};

#endif