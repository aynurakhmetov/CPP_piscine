/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:00 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:08:46 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_name = "";
    this->_meleeAtackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "FR4G-TP создан" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_name = name;
    this->_meleeAtackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "FR4G-TP <" << this->_name << "> создан" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copyFrag)
{
    std::cout << "Создана копия FR4G-TP" << std::endl;
    *this = copyFrag;
}

FragTrap &FragTrap::operator=(FragTrap const &otherFrag)
{
    std::cout << "FR4G-TP получил свойства другого FR4G-TP" << std::endl;
    this->_hitPoints = otherFrag._hitPoints;
    this->_maxHitPoints = otherFrag._maxHitPoints;
    this->_energyPoints = otherFrag._energyPoints;
    this->_maxEnergyPoints = otherFrag._maxEnergyPoints;
    this->_level = otherFrag._level;
    this->_name = otherFrag._name;
    this->_meleeAtackDamage = otherFrag._meleeAtackDamage;
    this->_rangedAttackDamage = otherFrag._rangedAttackDamage;
    this->_armorDamageReduction = otherFrag._armorDamageReduction;
    return (*this);  
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP уничтожен!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->_name << "> атакует цель <" << target <<
     "> дальним боем, наносит " << _rangedAttackDamage << " единиц повреждения!" << std::endl;
}

void FragTrap::meleeAtack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->_name << "> атакует цель <" << target <<
     "> ближним боем, наносит " << this->_meleeAtackDamage << " единиц повреждения!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    unsigned int amountMinusArmor;

    std::cout << "FR4G-TP <" << this->_name << "> может получить " << amount << " урона, но у нас есть " <<
    this->_armorDamageReduction << " брони, попробуем спастись! C робобогом!" << std::endl;
    if (amount <= this->_armorDamageReduction)
    {
        std::cout << "FR4G-TP <" << this->_name << "> получил 0 урона! Атака не может пробить защиту! Ура!" << std::endl;
        return;
    }
    else
        amountMinusArmor = amount - this->_armorDamageReduction;
    std::cout << "-----До FR4G-TP <" << this->_name << "> имеет " << this->_hitPoints << " XP-----" << std::endl;
    if (this->_hitPoints > amountMinusArmor)
    {
        this->_hitPoints = this->_hitPoints - amountMinusArmor;
        std::cout << "FR4G-TP <" << this->_name << "> получил " << amountMinusArmor << " урона!" << std::endl;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout << "FR4G-TP <" << this->_name << "> убит или уже умер!" << std::endl;
    }
    std::cout << "-----После: FR4G-TP <" << this->_name << "> имеет " << this->_hitPoints << " XP-----" << std::endl;
}

void FragTrap::beReparired(unsigned int amount)
{
    std::cout << "FR4G-TP <" << this->_name << "> может восстановить " << amount << " здоровья, но у нас есть " <<
        this->_energyPoints << " энергии, попробуем спастись! C робобогом!" << std::endl;
    std::cout << "-----Дo: FR4G-TP <" << this->_name << "> имеет " << this->_hitPoints << " ХP и " <<
     this->_energyPoints << " единиц энергии!-----" << std::endl;
    if (amount <= this->_energyPoints)
    {
        this->_hitPoints = this->_hitPoints + amount;
        if (this->_hitPoints > this->_maxHitPoints)
            this->_hitPoints = this->_maxHitPoints;
        this->_energyPoints = this->_energyPoints - amount;
        std::cout << "FR4G-TP <" << this->_name << "> восстановил " << amount << " единиц XP!" << std::endl;
    }
    else
        std::cout << "FR4G-TP <" << this->_name << "> не имеет достаточного колиечства энергии для восстановления! Купи страховку!" 
        << std::endl;
    std::cout << "-----После FR4G-TP <" << this->_name << "> имеет " << this->_hitPoints << " ХP и " <<
     this->_energyPoints << " единиц энергии!-----" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std :: string const &target)
{
    int randomVariable;
    int randomVariableTwo;
    
    std::string superAttack[] = {"Война", "Искателей", "Разбойников Пандоры", "Красивое слово", "Мудрость"};
    unsigned int damage[] = {1, 200, 10, 21, 42};
    if (this->_energyPoints >= 25)
    {
        randomVariable = rand() % 5;
        randomVariableTwo = rand() % 5;
        std::cout << "FR4G-TP <" << this->_name << "> используя <" << superAttack[randomVariable] << "> атаковал <" <<
         target << "> и нанес ему " << damage[randomVariableTwo] << " урона" << std::endl;
    }
    else
        std::cout << "FR4G-TP <" << this->_name << "> не имеет достаточного колиечства энергии для этой процедуры'!" << std::endl;
}
