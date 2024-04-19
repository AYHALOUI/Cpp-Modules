/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:37:16 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 17:29:30 by ahaloui          ###   ########.fr       */
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

    /*---------------------- Example of queue ------------------------*/

    // First In First Out
    // std::queue<int> myQueue;
    // myQueue.push(10);
    // myQueue.push(20);
    // myQueue.push(30);
    // myQueue.push(40);

    // // print the queue elements
    // while (!myQueue.empty())
    // {
    //     std::cout << myQueue.front() << std::endl;
    //     myQueue.pop();
    // }

    
    /*---------------------- Example of stack ------------------------*/
    // Last In First Out 

    // std::stack<int, std::vector<int> > mstack;

    // mstack.push(5);
    // mstack.push(17);
    // mstack.push(3);
    // mstack.push(5);

    // std::cout << "---------\n";
    // // print the stack elements
    // while (!mstack.empty())
    // {
    //     std::cout << mstack.top() << std::endl;
    //     mstack.pop();
    // }
    
    /*--------------------- Example of deque -------------------- */
    // std::deque<int> myDeque;

    // myDeque.push_back(10);
    // myDeque.push_back(20);
    // myDeque.push_back(30);

    // // Insert elements at the front
    // myDeque.push_front(5);
    // myDeque.push_front(15);

    // std::deque<int>::iterator it;
    // for (it = myDeque.begin(); it != myDeque.end(); it++)
    //     std::cout << *it << std::endl;
    // myDeque.pop_front();
    // myDeque.pop_back();
    // std::cout << std::endl;
    
    // for (it = myDeque.begin(); it != myDeque.end(); it++)
    //     std::cout << *it << std::endl;
    
    /*---------------------------------------------------------------*/
    return (0);
}