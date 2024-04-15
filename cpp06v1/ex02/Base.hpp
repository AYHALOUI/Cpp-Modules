/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:28:36 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:07:28 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif