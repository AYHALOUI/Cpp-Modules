/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:40:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 17:44:14 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


#include "iostream"
#include "string"

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator = (const WrongAnimal &copy);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const; 
};


#endif