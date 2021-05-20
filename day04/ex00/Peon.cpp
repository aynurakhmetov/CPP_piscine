/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:52 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:39:09 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
    this->printConstructorParameters();
}

Peon::Peon(std::string name) : Victim(name)
{
    this->printConstructorParameters();
}

Peon::Peon(Peon const &сopyOfPeon)
{
    *this = сopyOfPeon;
    this->printConstructorParameters();
}

Peon::~Peon(void)
{
    std::cout << "Bleuark ..." << std::endl;
}

Peon  &Peon::operator=(Peon const &otherPeon)
{
    Victim::operator=(otherPeon);
    return (*this);
}

void Peon::printConstructorParameters(void)
{
    std::cout << "Zog zog" << std::endl;
}

void Peon::getPolymorphed () const
{
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
