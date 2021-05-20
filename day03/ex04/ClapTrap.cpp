/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:13:13 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:57:52 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_name = "";
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->setModelOfRobot("CL4P-TP");
    std::cout << "CLAP: " << this->_modelOfRobot <<" создан" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_name = name;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->setModelOfRobot("CL4P-TP");
    std::cout << "CLAP: " << this->_modelOfRobot <<" <" << this->_name << "> создан" << std::endl;
}

ClapTrap::ClapTrap(std::string n,unsigned int hp, unsigned int mHp, 
        unsigned int ep, unsigned int mEp, unsigned int lvl, unsigned int mDamage, 
        unsigned int rDamage, unsigned int arm)
{
    this->_hitPoints = hp;
    this->_maxHitPoints = mHp;
    this->_energyPoints = ep;
    this->_maxEnergyPoints = mEp;
    this->_level = lvl;
    this->_name = n;
    this->_meleeAttackDamage = mDamage;
    this->_rangedAttackDamage = rDamage;
    this->_armorDamageReduction = arm;  
    std::cout << "CLAP: " << this->_modelOfRobot <<" <" << this->_name << "> создан" << std::endl;   
}


ClapTrap::ClapTrap(ClapTrap const &copyClap)
{
    std::cout << "Создана копия " << this->_modelOfRobot << std::endl;
    *this = copyClap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &otherClap)
{
    std::cout << this->_modelOfRobot << " получил свойства другого " << this->_modelOfRobot << std::endl;
    this->_hitPoints = otherClap._hitPoints;
    this->_maxHitPoints = otherClap._maxHitPoints;
    this->_energyPoints = otherClap._energyPoints;
    this->_maxEnergyPoints = otherClap._maxEnergyPoints;
    this->_level = otherClap._level;
    this->_name = otherClap._name;
    this->_meleeAttackDamage = otherClap._meleeAttackDamage;
    this->_rangedAttackDamage = otherClap._rangedAttackDamage;
    this->_armorDamageReduction = otherClap._armorDamageReduction;
    return (*this);  
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "CLAP: " << this->_modelOfRobot << " уничтожен!" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->_modelOfRobot << " <" << this->_name << "> атакует цель <" << target <<
     "> дальним боем, наносит " << _rangedAttackDamage << " единиц повреждения!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->_modelOfRobot <<" <" << this->_name << "> атакует цель <" << target <<
     "> ближним боем, наносит " << this->_meleeAttackDamage << " единиц повреждения!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int amountMinusArmor;
    
    std::cout << this->_modelOfRobot << " <" << this->_name << "> может получить " << amount << " урона, но у нас есть " <<
        this->_armorDamageReduction << " брони, попробуем спастись! C робобогом!" << std::endl;
    if (amount <= this->_armorDamageReduction)
    {
        std::cout << this->_modelOfRobot << " <" << this->_name << "> получил 0 урона! Атака не может пробить защиту! Ура!" << std::endl;
        return;
    }
    else
        amountMinusArmor = amount - this->_armorDamageReduction;
    std::cout << "-----Дo: " << this->_modelOfRobot << " <" << this->_name << "> имеет " << this->_hitPoints << " XP-----" << std::endl;
    if (this->_hitPoints > amountMinusArmor)
    {
        this->_hitPoints = this->_hitPoints - amountMinusArmor;
        std::cout << this->_modelOfRobot <<" <" << this->_name << "> получил " << amountMinusArmor << " урона!" << std::endl;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout << this->_modelOfRobot <<" <" << this->_name << "> убит или уже умер!" << std::endl;
    }
    std::cout << "-----После: "<< this->_modelOfRobot << " <" << this->_name << "> имеет " << this->_hitPoints << " ХP-----" << std::endl;
}

void ClapTrap::beReparired(unsigned int amount)
{
    std::cout << this->_modelOfRobot << " <" << this->_name << "> может восстановить " << amount << " здоровья, но у нас есть " <<
        this->_energyPoints << " энергии, попробуем спастись! C робобогом!" << std::endl;
    std::cout << "-----Дo: " << this->_modelOfRobot << " <" << this->_name << "> имеет " << this->_hitPoints << " XP и " <<
        this->_energyPoints << " единиц энергии!-----" << std::endl;
    if (amount <= this->_energyPoints)
    {
        this->_hitPoints = this->_hitPoints + amount;
        if (this->_hitPoints > this->_maxHitPoints)
            this->_hitPoints = this->_maxHitPoints;
        this->_energyPoints = this->_energyPoints - amount;
        std::cout << this->_modelOfRobot <<" <" << this->_name << "> восстановил " << amount << " единиц XP!" << std::endl;
    }
    else
        std::cout << this->_modelOfRobot <<" <" << this->_name << "> не имеет достаточного колиечства энергии для восстановления!" << std::endl;
    std::cout << "-----После: "<< this->_modelOfRobot << " <" << this->_name << "> имеет " << this->_hitPoints << " ХP и " <<
        this->_energyPoints << " единиц энергии!-----" << std::endl;
}

void ClapTrap::setModelOfRobot(std::string model)
{
    this->_modelOfRobot = model;
}

std::string ClapTrap::getNameOfTrap()
{
    return (this->_name);
}

unsigned int ClapTrap::getEnergyPoints()
{
    return (this->_energyPoints);
}