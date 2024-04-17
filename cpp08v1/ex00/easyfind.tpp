/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:33:41 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/17 17:16:15 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind (T& container, int value)
{
    /* Manual Search */
    // typename T::iterator iterator;
    // for (it = container.begin(); it != container.end(); it++)
    // {
    //     if (*it == value)
    //         return (it);
    // }
    // throw std::runtime_error("Value Not Found");
    typename T::iterator iterator;
    iterator = std::find(container.begin(), container.end(), value);
    if (iterator == container.end())
        (throw std::runtime_error("Value Not Found"));
    return iterator;
}