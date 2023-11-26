/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/11/26 22:26:51 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat():name(""), grade(0)
{
    std::cout << "Default Constructor Called from BureauCrat" << std::endl;
    std::cout << grade << std::endl;
}

BureauCrat::BureauCrat(const BureauCrat &copy)
{
    std::cout << "Copy Constructor Called from BureauCrat" << std::endl;
    *this = copy;
}


BureauCrat& BureauCrat::operator = (const BureauCrat &copy)
{
    if (this == &copy)
        return (*this);
    this->name = copy.name;
    this->grade = copy.grade;
    return (*this);
}

BureauCrat::~BureauCrat()
{
   std::cout << "Destructor Called from BureauCrat" << std::endl; 
}

BureauCrat::BureauCrat(std::string name, int grade):name(name), grade(grade)
{
    std::cout << "Constructor parametrazed Called from BureauCrat" << std::endl; 
}

std::string BureauCrat::getName()
{
    return (this->name);
}

int BureauCrat::getGrade()
{
    return (this->grade);
}

void BureauCrat::incrementGrade()
{
    this->grade --;
}

void BureauCrat::decrementGrade()
{
    this->grade ++;
}

// std::ostream& operator << (std::ostream& out, const BureauCrat& bureaucrat)
// {
//     std::cout << bureaucrat.getName() << ", bureaucrat grade" << bureaucrat.getGrade();
//     return (out);
// }