/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:37:26 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 22:10:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename container_type>
MutantStack<T, container_type>::MutantStack() : std::stack<T, container_type>()
{
    std::cout << "Default constructor called from MutantStack" << std::endl;
}

template <typename T, typename container_type>
MutantStack<T, container_type>::MutantStack(const MutantStack &copy) : std::stack<T, container_type>(copy)
{
    std::cout << "Copy constructor called from MutantStack" << std::endl;
}

template <typename T, typename container_type>
MutantStack<T, container_type> &MutantStack<T, container_type>::operator= (const MutantStack &copy)
{
    std::cout << "Assignation operator called from MutantStack" << std::endl;
    if (this == &copy)
        return (*this);
    std::stack<T, container_type>::operator= (copy);
    return (*this);
}

template <typename T, typename container_type>
MutantStack<T, container_type>::~MutantStack()
{
    std::cout << "Destructor called from MutantStack" << std::endl;
}

template <typename T, typename container_type>
typename MutantStack<T, container_type>::iterator MutantStack<T, container_type>::begin()
{
    return (this->c.begin());
}

template <typename T, typename container_type>
typename MutantStack<T, container_type>::iterator MutantStack<T, container_type>::end()
{
    return (this->c.end());
}