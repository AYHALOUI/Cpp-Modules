/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:30:28 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:03:57 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>


class ScalarConverter {
        
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator= (const ScalarConverter& copy);
        ~ScalarConverter();


        /* print functions */
        static void print_simple_case(char c);
        static void print_pseudo_literals (std::string str);

        /* parsing functions */
        static int count_nb_point(std::string number);
        static int count_nb_f(std::string number);
        static bool is_valide_number(std::string number);
        static bool is_pseudo_literals (std::string str);
        static bool check_if_float(std::string number);
        static bool chec_if_f_in_end(std::string number);


        /* convert functions */
        static void toInt(std::string number);
        static void toChar(std::string number);
        static void toFloat(std::string number);
        static void toDouble(std::string number);

        /* main function of converting */
        static void convert (std::string str);
};


#endif