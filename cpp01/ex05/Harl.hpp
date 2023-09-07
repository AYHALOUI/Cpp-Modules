/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:38:52 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 17:02:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    public:
		void complain( std::string level );
		
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		int convetToInteger(std::string level); 
};

#endif