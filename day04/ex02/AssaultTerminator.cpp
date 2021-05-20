/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:02:19 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 22:06:57 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copyTM)
{
    *this = copyTM;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &otherTM)
{
    (void)otherTM;
    return *this;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator  *AssaultTerminator::clone() const
{
    AssaultTerminator* cloneTM = new AssaultTerminator(*this);
    return cloneTM;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "*does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "*attacks with chainfists *" << std::endl;
}
