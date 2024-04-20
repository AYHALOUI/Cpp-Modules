/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:37:16 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 22:12:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"



int main()
{   
    {
        /****************************************************************/
        MutantStack<int> mystack0;
        mystack0.push(5);
        mystack0.push(17);
        mystack0.push(3);
        mystack0.push(5);
    
        MutantStack<int>::iterator it0;
        for (it0 = mystack0.begin(); it0 !=  mystack0.end(); it0++)
            std::cout << *it0 << std::endl;
        
        /***************************************************************/
        MutantStack<int, std::vector<int> > mystack;
    
        mystack.push(5);
        mystack.push(17);
        mystack.push(3);
        mystack.push(5);
    
        MutantStack<int, std::vector<int> >::iterator it;
    
        for (it = mystack.begin(); it !=  mystack.end(); it++)
            std::cout << *it << std::endl;
        /**************************************************************/
        MutantStack<int, std::list<int> > mystack1;
    
        mystack1.push(5);
        mystack1.push(17);
        mystack1.push(3);
        mystack1.push(5);
    
        MutantStack<int, std::list<int> >::iterator it1;
    
        for (it1 = mystack1.begin(); it1 !=  mystack1.end(); it1++)
        std::cout << *it1 << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    return (0);
}