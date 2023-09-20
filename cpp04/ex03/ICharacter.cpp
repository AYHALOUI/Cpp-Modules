/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:19:13 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 20:56:53 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>

class ICharacter
{
    public:
    
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        // virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
