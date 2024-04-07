/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:04 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/07 21:43:13 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "AForm.hpp"

#include <iostream>
#include <string>
#include <iostream>


class AForm;

class Bureaucrat
{
	private:
		const std::string	bureaucrat_name;
		int					bureaucrat_grade;

	public:
		/* orhtodox canonical form */
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator= (const Bureaucrat& copy);
		~Bureaucrat();
		
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

std::ostream& operator<< (std::ostream &out, const Bureaucrat &BureauCrat);

#endif