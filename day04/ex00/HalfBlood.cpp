/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HalfBlood.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:09:37 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:39:03 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HalfBlood.hpp"

HalfBlood::HalfBlood(void)
{
    this->printConstructorParameters();
}

HalfBlood::HalfBlood(std::string name) : Victim(name)
{
    this->printConstructorParameters();
}

HalfBlood::HalfBlood(HalfBlood const &сopyOfHalfBlood)
{
    *this = сopyOfHalfBlood;
    this->printConstructorParameters();
}

HalfBlood::~HalfBlood(void)
{
    std::cout << "Avada Kedavra" << std::endl;
}

HalfBlood  &HalfBlood::operator=(HalfBlood const &otherHalfBlood)
{
    Victim::operator=(otherHalfBlood);
    return (*this);
}

void HalfBlood::printConstructorParameters(void)
{
    std::cout << "Half-blood magician " << this->getName() << " is born" << std::endl;
}

void HalfBlood::getPolymorphed () const
{
    std::cout << this->getName() << " has been turned into a death eater!" << std::endl;
}

void HalfBlood::sayASpell()
{
    std::string spells[] = {"Accio", "Wingardium Leviosa", "Expelliarmus", "Lumos", "Alohomora"};
    int randomVariable;
    
    randomVariable = rand() % 5;
    std::cout << spells[randomVariable] << std::endl;
}
