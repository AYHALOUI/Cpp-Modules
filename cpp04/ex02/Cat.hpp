/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:29 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 14:36:10 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *ptrBrain;
        
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator = (const Cat &copy);
        ~Cat();

        void makeSound() const;
};


#endif 