/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:04 by ahaloui           #+#    #+#             */
/*   Updated: 2023/11/26 22:27:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>


class BureauCrat
{
	private:
		const std::string	bureaucrat_name;
		int					bureaucrat_grade;

	public:
		BureauCrat();
		BureauCrat(const std::string name, int grade);
		BureauCrat(const BureauCrat& copy);
		BureauCrat& operator = (const BureauCrat& copy);
		~BureauCrat();
};

#endif