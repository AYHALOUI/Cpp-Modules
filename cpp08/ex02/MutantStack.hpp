/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:37:22 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 22:12:20 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>


template <typename T, typename container_type = std::deque<T> >
class MutantStack : public std::stack<T, container_type>
{
    public:
    
        /*Orthodox Canonical Form*/
        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator= (const MutantStack &copy);
        ~MutantStack();

        /* typedef iterator */
        typedef typename std::stack<T, container_type>::container_type::iterator iterator;

        /*member functions*/
        iterator begin();
        iterator end();
};
#include "MutantStack.tpp"
#endif