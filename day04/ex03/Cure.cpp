/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:21:57 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/11 14:30:20 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &copyCure)
{
    *this = copyCure;
}   

Cure &Cure::operator=(Cure const &otherCure)
{
    AMateria::operator=(otherCure);
    return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter &icharacter)
{
    AMateria::use(icharacter);
    std::cout << "* heals " << icharacter.getName() << " wounds *" << std::endl;
}

Cure *Cure::clone() const
{
    Cure *cloneCure = new Cure();
    return cloneCure;
}
