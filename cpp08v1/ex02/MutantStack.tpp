/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:37:26 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/18 20:38:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
    std::cout << "Default constructor called from MutantStack" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy)
{
    std::cout << "Copy constructor called from MutantStack" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator= (const MutantStack &copy)
{
    std::cout << "Assignation operator called from MutantStack" << std::endl;
    if (this == &copy)
        return (*this);
    std::stack<T, Container>::operator= (copy);
    return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "Destructor called from MutantStack" << std::endl;
}

// template <typename T, typename Container>
// typename MutantStack<T>::iterator MutantStack<T, Container>::begin()
// {
//     return (std::stack<T>::c.begin());
// }

// template <typename T>
// typename MutantStack<T>::iterator MutantStack<T>::end()
// {
//     return (std::stack<T>::c.end());
// }

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return (this->c.end());
}