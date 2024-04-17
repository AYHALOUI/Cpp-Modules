/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:33:30 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/17 17:16:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <map>
#include <list>
#include <algorithm> // for std::find


template <typename T>
typename T::iterator easyfind (T& container, int value);

#include "easyfind.tpp"
#endif
