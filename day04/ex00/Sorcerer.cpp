/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:40 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:52:04 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("Vladimir"), _title("tsar")
{
    this->printConstructorParameters();
}

Sorcerer::Sorcerer(std::string name, std::string title) 
    : _name(name), _title(title)
{
    this->printConstructorParameters();
}

Sorcerer::Sorcerer(Sorcerer const &сopyOfSorcerer)
{
    *this = сopyOfSorcerer;
    this->printConstructorParameters();
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name <<", " << this->_title << 
        ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer  &Sorcerer::operator=(Sorcerer const &otherSorcerer)
{
    this->_name = otherSorcerer._name;
    this->_title = otherSorcerer._title;
    return (*this);
}

void Sorcerer::printConstructorParameters(void)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return this->_name;
}

std::string Sorcerer::getTitle() const
{
    return this->_title;
}

void Sorcerer::polymorph (Victim const &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return out;
}
