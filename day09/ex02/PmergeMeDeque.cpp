/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:14:09 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/28 00:20:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeDeque.hpp"

std::string PmergeMeDeque::last_arg;

PmergeMeDeque::PmergeMeDeque()
{
}

PmergeMeDeque::PmergeMeDeque(const PmergeMeDeque &copy)
{
    (*this) = copy;
}

PmergeMeDeque& PmergeMeDeque::operator= (const PmergeMeDeque &copy)
{
    if (this == &copy)
        return (*this);
    this->unsorted_deque = copy.unsorted_deque;
    this->main_deque = copy.main_deque;
    this->pend_deque = copy.pend_deque;
    this->index_deque = copy.index_deque;
    return (*this);
}

PmergeMeDeque::~PmergeMeDeque()
{
}

std::deque<std::pair<int, int> > PmergeMeDeque::getUnsortedDeque() const
{
    return (this->unsorted_deque);
}

std::deque<int> PmergeMeDeque::getMainDeque() const
{
    return (this->main_deque);
}

std::deque<int> PmergeMeDeque::getPendDeque() const
{
    return (this->pend_deque);
}

std::string PmergeMeDeque::getLastArg()
{
    return (last_arg);
}

bool PmergeMeDeque::parse_args(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {   
        if (av[i][0] != '+' && !isdigit(av[i][0]) && av[i][0] != ' ')
        {
            std::cout << "Error" << std::endl;
            return (false);
        }
    }
    for (int i = 1; i < ac; i++)
    {
        std::string temp = av[i];
        for (size_t i = 0; i < temp.length(); i++)
        {
            if (!isdigit(temp[i]) && temp[i] != ' ' && temp[i] != '+')
            {
                std::cout << "Error" << std::endl;
                return (false);
            }
        }
    }
    return (true);
}

std::string PmergeMeDeque::join_args(int ac, char **av)
{
    std::string temp;
    int new_ac;

    last_arg = ((ac - 1) % 2 != 0) ? av[ac - 1]: "";
    new_ac = ((ac - 1) % 2 == 0) ? ac: ac - 1;
    for (int i = 1; i < new_ac; i++)
    {
        temp.append(av[i]);
        if (i < new_ac - 1)
            temp.append(" ");
    }
    return (temp);
}

void PmergeMeDeque::replace_char (std::string& args, char target, char remplacement)
{
    for (size_t i = 0; i < args.length(); i++)
    {
        if (args[i] == target)
            args[i] = remplacement;
    }
}

std::string PmergeMeDeque::remove_all_with_spaces(std::string args)
{
    std::string result;
    bool inWord;

    inWord = false;
    replace_char (args, '+', ' ');
    for (std::size_t i = 0; i < args.length(); ++i) 
    {
        if (std::isspace(args[i])) 
        {
            if (!inWord) 
            {
                result += args[i];
                inWord = true;
            }
        } 
        else 
        {
            result += args[i];
            inWord = false;
        }
    }
    return result;
}

void PmergeMeDeque::fill_unsorted_deque(std::string args)
{
    args = remove_all_with_spaces(args);
    std::pair<int, int> pairs;
    std::stringstream string_stream(args);
    std::string arg;
    while (std::getline(string_stream, arg, ' '))
    {
        pairs.first = std::atoi(arg.c_str());
        std::getline(string_stream, arg, ' ');
        pairs.second = std::atoi(arg.c_str());
        this->unsorted_deque.push_back(pairs);
    }
    // print_before_sort();
}

void PmergeMeDeque::reorders_pairs(std::pair<int, int>& pair)
{
    if (pair.first < pair.second)
        std::swap(pair.first, pair.second);
}

void PmergeMeDeque::sort_reorder_pairs()
{
    for (size_t i = 0; i < this->unsorted_deque.size(); i++)
        reorders_pairs(this->unsorted_deque[i]);
    std::sort(this->unsorted_deque.begin(), this->unsorted_deque.end());
}
int PmergeMeDeque::jacobsthal(int n)
{
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    if (!n)
        return (a);
    else if (n == 1)
        return (b);
    for (int i = 2; i <= n; i++)
    {
        c = (a * 2) + b;
        a = b;
        b = c;
    }
    return (b);
}

void PmergeMeDeque::create_main_and_pend()
{
    for (size_t i = 0; i < this->unsorted_deque.size(); i++)
    {
        if (!i)
            this->main_deque.push_back(this->unsorted_deque[i].second);
        this->main_deque.push_back(this->unsorted_deque[i].first);
        this->pend_deque.push_back(this->unsorted_deque[i].second);
    }
}

void PmergeMeDeque::create_index_deque()
{
    std::deque<int> jacobsthal_index;
    size_t i = 0;
    while (i <= (this->pend_deque.size()) + 1)
    {
        int value = jacobsthal(i);
        jacobsthal_index.push_back(value);
        if (value > int(this->pend_deque.size()))
            break;
        i++;
    }

    for (size_t i = 0; i < jacobsthal_index.size(); i++)
    {
        if (!i || i == 1 || i == 2 )
            continue;
        int value_tmp1 = jacobsthal_index[i];
        this->index_deque.push_back(value_tmp1);
        if (size_t(value_tmp1) > this->pend_deque.size())
            this->index_deque.pop_back();
        while (this->index_deque.size() < this->pend_deque.size())
        {
            value_tmp1--;
            while (size_t(value_tmp1) > pend_deque.size())
            {
                value_tmp1--;
                continue;
            }
            if (std::find(jacobsthal_index.begin(), jacobsthal_index.end(), value_tmp1) 
                != jacobsthal_index.end())
                break;
            this->index_deque.push_back(value_tmp1);
        }
    }
}

void PmergeMeDeque::print_before_sort()
{
    std::cout << "Before: ";
    for (size_t i = 0; i < this->unsorted_deque.size(); i++)
        std::cout << this->unsorted_deque[i].first << " " << this->unsorted_deque[i].second << " ";
    if (!last_arg.empty())
        std::cout << last_arg;
    std::cout << std::endl;
}

void PmergeMeDeque::print_after_sort()
{
    std::cout << "After: ";
    for (size_t i = 0; i < this->main_deque.size(); i++)
        std::cout << this->main_deque[i] << " ";
    std::cout << std::endl;
}

void PmergeMeDeque::sort_main_deque()
{
    clock_t start = clock();
    for (size_t i = 0; i < this->index_deque.size(); i++)
    {
        std::deque<int>::iterator ite;

        ite = std::lower_bound(this->main_deque.begin(), this->main_deque.end(), this->pend_deque[index_deque[i] - 1]);
        this->main_deque.insert(ite, pend_deque[this->index_deque[i] - 1]);
    }
    if (!last_arg.empty())
    {
        int last_value;
        std::deque<int>::iterator ite;

        last_value = std::atoi(last_arg.c_str());
        ite = std::lower_bound(this->main_deque.begin(), this->main_deque.end(), last_value);
        this->main_deque.insert(ite, last_value);
    }
    clock_t end = clock();
    // print_after_sort();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->main_deque.size() << " elements with std::deque: " << elapsed_time << "us" << std::endl;
}