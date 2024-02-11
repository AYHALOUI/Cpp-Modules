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
        std::string name;
        int grade;
        
    public:
        BureauCrat();
        BureauCrat(const BureauCrat &copy);
        BureauCrat &operator = (const BureauCrat &copy);
        ~BureauCrat();

        BureauCrat(std::string name, int grade);
        const std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade too low");
                }
        };
};
std::ostream &operator << (std::ostream &out, const BureauCrat &bureaucrat);
#endif