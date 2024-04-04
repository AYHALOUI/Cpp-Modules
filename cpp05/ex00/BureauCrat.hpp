/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:04 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/04 21:17:23 by ahaloui          ###   ########.fr       */
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
		BureauCrat(const BureauCrat& copy);
		BureauCrat& operator = (const BureauCrat& copy);
		~BureauCrat();


		BureauCrat(const std::string& name, int grade);
		int getGrade() const;
		const std::string getName() const;

		void incrementBureaucratGrade();
		void decrementBureaucratGrade();

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException()
                {
                    std::cout << "Default Constructor Called from GradeTooHighException" << std::endl;
                }
				const char* what() const throw()
				{
					return "Grade too low";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException()
                {
                    std::cout << "Default Constructor Called from GradeTooLowException" << std::endl;
                }
				const char* what() const throw()
				{
					return "Grade too low";
				}
		};
};

std::ostream& operator<< (std::ostream& out, const BureauCrat& BureauCrat);

#endif