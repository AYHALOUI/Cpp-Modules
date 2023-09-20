/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:43 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 20:57:11 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>


class AMateria
{
    protected:
        std::string type;
        
    public:
        AMateria();
        AMateria(const AMateria &copy);
        AMateria &operator = (const AMateria &copy);
        virtual ~AMateria();
        
        AMateria(std::string const & type);
        std::string const & getType() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif  

// class AMateria
// {
// protected:
// [...]
// public:
// AMateria(std::string const & type);
// [...]
// std::string const & getType() const; //Returns the materia type
// virtual AMateria* clone() const = 0;
// virtual void use(ICharacter& target);
// };