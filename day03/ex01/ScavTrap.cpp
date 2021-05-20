/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:49:23 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:19:30 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_name = "";
    this->_meleeAtackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout << "SC4V-TP создан" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_name = name;
    this->_meleeAtackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 5;
    std::cout << "SC4V-TP <" << this->_name << "> создан" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copyScav)
{
    std::cout << "Создана копия SC4V-TP" << std::endl;
    *this = copyScav;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &otherScav)
{
    std::cout << "SC4V-TP получил свойства другого SC4V-TP" << std::endl;
    this->_hitPoints = otherScav._hitPoints;
    this->_maxHitPoints = otherScav._maxHitPoints;
    this->_energyPoints = otherScav._energyPoints;
    this->_maxEnergyPoints = otherScav._maxEnergyPoints;
    this->_level = otherScav._level;
    this->_name = otherScav._name;
    this->_meleeAtackDamage = otherScav._meleeAtackDamage;
    this->_rangedAttackDamage = otherScav._rangedAttackDamage;
    this->_armorDamageReduction = otherScav._armorDamageReduction;
    return (*this);  
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4V-TP уничтожен!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << this->_name << "> фигачит цель <" << target <<
     "> с далека, нанося " << _rangedAttackDamage << " единиц повреждения!" << std::endl;
}

void ScavTrap::meleeAtack(std::string const & target)
{
    std::cout << "SC4V-TP <" << this->_name << "> фигачит цель <" << target <<
     "> с близи, нанося " << this->_meleeAtackDamage << " единиц повреждения!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int amountMinusArmor;

    std::cout << "SC4V-TP <" << this->_name << "> может получить " << amount << " урона, но у нас есть " <<
    this->_armorDamageReduction << " брони, попробуем спастись! C робобогом!" << std::endl;
    if (amount <= this->_armorDamageReduction)
    {
        std::cout << "SC4V-TP <" << this->_name << "> получил 0 урона! Атака не может пробить защиту! Ура!" << std::endl;
        return;
    }
    else
        amountMinusArmor = amount - this->_armorDamageReduction;
    std::cout << "-----До SC4V-TP <" << this->_name << "> имеет " << this->_hitPoints << " XP-----" << std::endl;
    if (this->_hitPoints > amountMinusArmor)
    {
        this->_hitPoints = this->_hitPoints - amountMinusArmor;
        std::cout << "SC4V-TP <" << this->_name << "> получил " << amountMinusArmor << " урона!" << std::endl;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout << "SC4V-TP <" << this->_name << "> убит или уже умер!" << std::endl;
    }
    std::cout << "-----После: SC4V-TP <" << this->_name << "> имеет " << this->_hitPoints << " XP-----" << std::endl;
}

void ScavTrap::beReparired(unsigned int amount)
{
    std::cout << "SC4V-TP <" << this->_name << "> может восстановить " << amount << " здоровья, но у нас есть " <<
        this->_energyPoints << " энергии, попробуем спастись! C робобогом!" << std::endl;
    std::cout << "-----Дo: SC4V-TP <" << this->_name << "> имеет " << this->_hitPoints << " ХP и " <<
     this->_energyPoints << " единиц энергии!-----" << std::endl;
    if (amount <= this->_energyPoints)
    {
        this->_hitPoints = this->_hitPoints + amount;
        if (this->_hitPoints > this->_maxHitPoints)
            this->_hitPoints = this->_maxHitPoints;
        this->_energyPoints = this->_energyPoints - amount;
        std::cout << "SC4V-TP <" << this->_name << "> восстановил " << amount << " единиц XP!" << std::endl;
    }
    else
        std::cout << "SC4V-TP <" << this->_name << "> не имеет достаточного колиечства энергии для восстановления! Купи страховку!" 
        << std::endl;
    std::cout << "-----После SC4V-TP <" << this->_name << "> имеет " << this->_hitPoints << " ХP и " <<
     this->_energyPoints << " единиц энергии!-----" << std::endl;
}

void ScavTrap::challengeNewcomer(std :: string const & target)
{
    int randomVariable;
    int randomVariableTwo;
    
    std::string superAttack[] = {"Фильм", "Расследование", "Звонок убийце", "Помочник Патрушева", "Моргенштерн"};
    unsigned int damage[] = {2, 300, 110, 211, 421};
    if (this->_energyPoints >= 25)
    {
        randomVariable = rand() % 5;
        randomVariableTwo = rand() % 5;
        std::cout << "SC4V-TP <" << this->_name << "> используя <" << superAttack[randomVariable] << "> зафигачил <" <<
         target << "> и нанес ему " << damage[randomVariableTwo] << " урона" << std::endl;
    }
    else
        std::cout << "SC4V-TP <" << this->_name << "> бомж энергии, не хватает ее, короче!" << std::endl;
}
