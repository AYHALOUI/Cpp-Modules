/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:36:57 by ahaloui           #+#    #+#             */
/*   Updated: 2023/11/26 22:44:23 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        BureauCrat b("BureauCrat aymene", 150);
        std::cout << "*****************" << std::endl;
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        std::cout << "*****************" << std::endl;
        ShrubberyCreationForm s("home");
        std::cout << s << std::endl;
        s.beSigned(b);
        std::cout << s << std::endl;
        s.execute(b);
        std::cout << "*****************" << std::endl;
        RobotomyRequestForm r("home");
        std::cout << r << std::endl;
        r.beSigned(b);
        std::cout << r << std::endl;
        r.execute(b);
        std::cout << "*****************" << std::endl;
        PresidentialPardonForm p("home");
        std::cout << p << std::endl;
        p.beSigned(b);
        std::cout << p << std::endl;
        p.execute(b);
        std::cout << "*****************" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}