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
// #include "Form.hpp"

class Enclosing 
{
    private:
        int x;
    
    public:
        Enclosing()
        {

        };
    class Nested
    {
        public:
            int y;
        void funNested(Enclosing e)
        {
            e.x = 10;
            std::cout << e.x << std::endl;
        }
    };
};

int main()
{

    int a,b;
    float c;

    a = 20;
    b = 40;


    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    // Enclosing en1;
    // Enclosing::Nested *n1 = new Enclosing::Nested();
    // n1->funNested(en1);
    // try
    // {
    //     BureauCrat b("BureauCrat aymene", 150);
    //     std::cout << "*****************" << std::endl;
    //     std::cout << b << std::endl;
    //     b.incrementGrade();
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    //     std::cout << b << std::endl;
    //     Form f("Form1", 150, 150);
    //     std::cout << f << std::endl;
    //     b.signForm(f);
    //     std::cout << f << std::endl;
    //     b.incrementGrade();
    //     std::cout << b << std::endl;
    //     b.signForm(f);
    //     std::cout << f << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    return (0);
}