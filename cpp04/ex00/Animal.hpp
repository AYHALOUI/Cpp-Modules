/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:12:50 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 17:33:34 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator = (const Animal &copy);
        virtual ~Animal();
        
        std::string getType() const;
        virtual void makeSound() const;
};

#endif