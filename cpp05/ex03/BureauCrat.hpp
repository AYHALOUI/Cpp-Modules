/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:04 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/06 02:43:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "AForm.hpp"

#include <iostream>
#include <string>
#include <iostream>


class AForm;

class BureauCrat
{
	private:
		const std::string	bureaucrat_name;
		int					bureaucrat_grade;

	public:
		/* orhtodox canonical form */
		BureauCrat();
		BureauCrat(const std::string& name, int grade);
		BureauCrat(const BureauCrat& copy);
		BureauCrat& operator = (const BureauCrat& copy);
		~BureauCrat();
		
		/*Getters*/
		int getGrade() const;
		const std::string getName() const;

		void incrementBureaucratGrade();
		void decrementBureaucratGrade();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		/* Last Function added to this Class */
		void signForm(AForm &form);

		void executeForm(AForm const & form);
};

std::ostream &operator << (std::ostream &out, const BureauCrat &BureauCrat);

#endif