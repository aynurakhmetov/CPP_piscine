/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:47 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:51:45 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("Aleksey")
{
    this->printConstructorParameters();
}

Victim::Victim(std::string name) 
    : _name(name)
{
    this->printConstructorParameters();
}

Victim::Victim(Victim const &сopyOfVictim)
{
    *this = сopyOfVictim;
    this->printConstructorParameters();
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim  &Victim::operator=(Victim const &otherVictim)
{
    this->_name = otherVictim._name;
    return (*this);
}

void Victim::printConstructorParameters(void)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

std::string Victim::getName() const
{
    return this->_name;
}

void Victim::getPolymorphed () const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &Victim)
{
    out << "I am " << Victim.getName() << ", and I like otters!" << std::endl;
    return out;
}
