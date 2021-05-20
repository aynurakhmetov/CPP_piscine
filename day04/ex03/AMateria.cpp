/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:17:13 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/10 11:51:40 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""), _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &copyAMateria)
{
    *this = copyAMateria;
}   

AMateria &AMateria::operator=(AMateria const &otherAMateria)
{
    this->_type = otherAMateria._type;
    this->_xp = otherAMateria._xp;
    return *this;

}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const //Returns the materia type
{
    return this->_type;
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
    return this->_xp;
}

void AMateria::use(ICharacter &icharacter)
{
    (void)icharacter;
    this->_xp += 10;
}
