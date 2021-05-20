/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:40:14 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/11 21:14:20 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &copyCharacter)
{
    this->deleteCharacter();
    *this = copyCharacter;
}

Character &Character::operator=(Character const &otherCharcter)
{
    this->_name = otherCharcter._name;
    this->deleteCharacter();
    for (int i = 0; i < 4; i++)
    {
        if (otherCharcter._inventory[i])
            this->_inventory[i] = otherCharcter._inventory[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    this->deleteCharacter();
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return;
        }
    }
    
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
        else
            std::cout << this->_name << " has not inventory" << std::endl;
    }
}

void Character::deleteCharacter()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
}
