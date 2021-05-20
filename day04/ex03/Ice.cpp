/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:21:28 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/10 13:23:37 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &copyIce)
{
    *this = copyIce;
}   

Ice &Ice::operator=(Ice const &otherIce)
{
    AMateria::operator=(otherIce);
    return *this;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter &icharacter)
{
    AMateria::use(icharacter);
    std::cout << "* shoots an ice bolt at " << icharacter.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
    Ice *cloneIce = new Ice();
    return cloneIce;
}
