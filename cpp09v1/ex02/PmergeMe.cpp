/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/24 21:02:12 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string PmergeMe::last_arg;

PmergeMe::PmergeMe()
{
	// std::cout << "Default constructor called from PmergeMe" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	std::cout << "Copy constructor called from PmergeMe" << std::endl;
	(*this) = copy;
}


PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	std::cout << "Assignation operator called from PmergeMe" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

PmergeMe::~PmergeMe()
{
	// std::cout << "Destructor called from PmergeMe" << std::endl;
}

int PmergeMe::jacobsthal(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

void PmergeMe::fill_vector(std::string str)
{
	std::stringstream ss(str);
	std::string token;
	while (std::getline(ss, token, ' '))
	{
		std::pair<int, int> p;
		p.first = std::atoi(token.c_str());
		p.second = getline(ss, token, ' ') ? std::atoi(token.c_str()) : -1;
		unsorted_vector.push_back(p);
	}
}

std::string PmergeMe::join_args(int ac, char **av)
{
	std::string str;
	last_arg = (ac -1) % 2 != 0 ? av[ac - 1] : "";
	int tmp = ac % 2 == 0 ? ac - 1 : ac;
	for (int i = 1; i < tmp; i++)
	{
		str += av[i];
		if (i < ac - 1)
			str += " ";
	}
	return str;
}
void PmergeMe::reorder_pairs(std::pair<int, int>& p)
{
	if (p.first < p.second) {
		std::swap(p.first, p.second);
	}
}

void PmergeMe::sort_reorder_pairs()
{
	for (size_t i = 0; i < unsorted_vector.size(); i++)
		reorder_pairs(unsorted_vector[i]);
	// print unsorted vector after reordering
	std::cout << "Unsorted vector after reordering: " << std::endl;
	for (std::vector<std::pair<int, int> >::iterator it = unsorted_vector.begin(); it != unsorted_vector.end(); it++)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << " ";
	} 
	std::cout << std::endl;
	std::cout << "after sorting:" << std::endl;
	std::sort(unsorted_vector.begin(), unsorted_vector.end());
	for (std::vector<std::pair<int, int> >::iterator it = unsorted_vector.begin(); it != unsorted_vector.end(); it++)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::separate_vector()
{
	std::vector<int> main_vector;
	std::vector<int> pend_vector;

	std::vector<int> jacobsthal_vector;
	std::vector<int> real_index_vector;

	for (size_t i = 0; i < unsorted_vector.size(); i++)
	{
		if (i == 0)
		{
			main_vector.push_back(unsorted_vector[i].second);
			main_vector.push_back(unsorted_vector[i].first);
			pend_vector.push_back(unsorted_vector[i].second);
		}
		else
		{
			main_vector.push_back(unsorted_vector[i].first);
			pend_vector.push_back(unsorted_vector[i].second);
		}
	}

	std::cout << "Main vector: " << std::endl;
	for (std::vector<int>::iterator it = main_vector.begin(); it != main_vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Pend vector: " << std::endl;
	for (std::vector<int>::iterator it = pend_vector.begin(); it != pend_vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (size_t i = 0; i <= pend_vector.size() + 1; i++)
	{
		if (jacobsthal(i) > (int)pend_vector.size())
		{
			jacobsthal_vector.push_back(jacobsthal(i));
			break;
		}
		else
			jacobsthal_vector.push_back(jacobsthal(i));
	}
	std::cout << "Jacobsthal vector: " << std::endl;
	for (std::vector<int>::iterator it = jacobsthal_vector.begin(); it != jacobsthal_vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	for (size_t i = 3; i < jacobsthal_vector.size(); i++)
	{
		int tmp1 = jacobsthal_vector[i];
		while (tmp1 > (int)pend_vector.size())
		{
			tmp1--;
			continue;
		}
		
		real_index_vector.push_back(tmp1);
		int temp;
		temp = tmp1;
		temp--;
		for (size_t j = temp; j > 0; j--)
		{
			if(std::find(jacobsthal_vector.begin(), jacobsthal_vector.end(), j) == jacobsthal_vector.end())
				real_index_vector.push_back(j);
			else
				break;
		}
	}
	std::cout << std::endl;	
	std::cout << "Real index vector: " << std::endl;
	for (std::vector<int>::iterator it = real_index_vector.begin(); it != real_index_vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	for (size_t i = 0; i < real_index_vector.size(); i++)
	{
		std::vector<int>::iterator ite = std::lower_bound(main_vector.begin(), main_vector.end(), pend_vector[real_index_vector[i] - 1]);
		main_vector.insert(ite, pend_vector[real_index_vector[i] - 1]);
	}
	if (!last_arg.empty())
	{
		int last_value = std::atoi(last_arg.c_str());
		std::vector<int>::iterator ite = std::lower_bound(main_vector.begin(), main_vector.end(), last_value);
		main_vector.insert(ite, last_value);
	}
	std::cout << std::endl;
	std::cout << "Main vector after insertion: " << std::endl;
	for (std::vector<int>::iterator it = main_vector.begin(); it != main_vector.end(); it++)
	{
		std::cout << *it << " ";
	}
}

bool PmergeMe::parse_args (int ac , char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (av[i][0] == '-')
			return false;
	}
	for (int i = 1; i < ac; i++)
	{
		for (size_t j = 0; j < strlen(av[i]); j++)
		{
			if (!isdigit(av[i][j]) && av[i][j] != ' ')
				return false;
		}
	}
	return true;
}

// void PmergeMe::generate_order_index()
// {
// 	// std::vector<int> order_index;
// 	std::vector<int> jacobsthal_vector;

// 	std::vector<int> compination_vector;

// 	// for (size_t i = 0; i < unsorted_vector.size(); i++)
// 	// {
// 	// 	order_index.push_back(i);
// 	// }
// 	// std::cout << "Order index: " << std::endl;
// 	// for (std::vector<int>::iterator it = order_index.begin(); it != order_index.end(); it++)
// 	// {
// 	// 	std::cout << *it << " ";
// 	// }
// 	//std::cout << std::endl;
// 	for (size_t i = 0; i < unsorted_vector.size(); i++)
// 	{
// 		jacobsthal_vector.push_back(jacobsthal(i));
// 	}
// 	std::cout << "Jacobsthal vector: " << std::endl;
// 	for (std::vector<int>::iterator it = jacobsthal_vector.begin(); it != jacobsthal_vector.end(); it++)
// 	{
// 		std::cout << *it << " ";
// 	}
// 	std::cout << std::endl;
// 	/***********************************************/
// 	for (size_t i = 0; i < jacobsthal_vector.size(); i++)
// 	{
// 		if (i < th)
// 	}
// 	std::cout << "Compination vector: " << std::endl;
// 	for (size_t i = 0; i < compination_vector.size(); i++)
// 	{
// 		std::cout << compination_vector[i] << " ";
// 	}
	
// }
	   

/************************************************/
// std::vector<std::pair<int, int> > PmergeMe::get_unsorted_vector() const
// {
// 	return unsorted_vector;
// }

// void PmergeMe::fill_deque()
// {
//     for (size_t i = 0; i < unsorted_vector.size(); i++)
//     {
//         if (i == 0)
//         {
//             sorted_vector.push_back(unsorted_vector[i].second);
//             sorted_vector.push_back(unsorted_vector[i].first);
//             unsorted_vector[i].first = -1;
//             unsorted_vector[i].second = -1;
//         }
//         else
//         {
//             sorted_vector.push_back(unsorted_vector[i].first);
//             unsorted_vector[i].first = -1;
//         }
//     }
// }



// void PmergeMe::print_deque()
// {
//     for (std::deque<int>::iterator it = sorted_vector.begin(); it != sorted_vector.end(); it++)
//     {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }