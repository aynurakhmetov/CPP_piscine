/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:29:12 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 14:37:29 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name(""), _numOfAp(40), _weapon(NULL)
{   
}

Character::Character(std::string const & name) : _name(name), _numOfAp(40), _weapon(NULL)
{   
}

Character::Character(Character const  &copyCharacter)
{
    *this = copyCharacter;
}

Character &Character::operator=(Character const  &otherCharacter)
{
    this->_name = otherCharacter._name;
    this->_numOfAp = otherCharacter._numOfAp;
    this->_weapon = otherCharacter._weapon;
    return *this;
}

Character::~Character()
{
}

void Character::recoverAP()
{
    if (this->_numOfAp + 10 > 40)
        this->_numOfAp = 40;
    else
        this->_numOfAp += 10;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (!this->_weapon || this->_numOfAp < this->_weapon->getAPCost())
        return;
    std::cout << this->_name << " attacks " << enemy->getType() <<" with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    enemy->takeDamage(this->_weapon->getDamage());
    this->_numOfAp -= this->_weapon->getAPCost();
    if (enemy->getHP() == 0)
    {
        delete (enemy);
    }
}

std::string const Character::getName() const
{
    return this->_name;
}

AWeapon *Character::getWeapon() const
{
    return this->_weapon;
}

int Character::getNumOfAP() const
{
    return this->_numOfAp;
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	out << character.getName() << " has " << character.getNumOfAP() << " AP and";
    if (!character.getWeapon())
    {
        out << " is unarmed" << std::endl;
    }
    else
    {
        out << " wields a " << character.getWeapon()->getName() << std::endl;
    }
    return out;
}
