/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:04 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/08 21:32:15 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;
class Bureaucrat
{
	private:
		const std::string	bureaucrat_name;
		int					bureaucrat_grade;

	public:
		/* orhtodox canonical form */
		Bureaucrat();
		Bureaucrat(const std::string bureaucrat_name, int bureaucrat_grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator = (const Bureaucrat& copy);
		~Bureaucrat();
		
		/*Getters*/
		int gerBureaucratGrade() const;
		const std::string getBureaucratName() const;

		void incrementBureaucratGrade();
		void decrementBureaucratGrade();

		/* Last Function added to this Class */
		void signForm(Form& form);

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
};

std::ostream &operator<< (std::ostream &out, const Bureaucrat& BureauCrat);

#endif