/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:12:50 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/18 20:54:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator = (const Animal &copy);
        ~Animal();
        virtual void makeSound() const;
};

#endif