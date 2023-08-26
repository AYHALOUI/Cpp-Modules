/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:04:04 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/26 14:33:33 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl
{
	public:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void someThingElse();
		void complain( std::string level );
};

#endif