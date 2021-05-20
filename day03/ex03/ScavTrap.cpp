/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:49:23 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:48:44 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("", 100, 100, 50, 50, 1, 20, 15, 3)
{
    this->setModelOfRobot("SC4V-TP");
    std::cout << "SC4V-TP создан" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    this->setModelOfRobot("SC4V-TP");
    std::cout << "SC4V-TP <" << name << "> создан" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copyScav)
{
    std::cout << "Создана копия SC4V-TP" << std::endl;
    *this = copyScav;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &otherScav)
{
    std::cout << "SC4V-TP получил свойства другого SC4V-TP" << std::endl;
    ClapTrap::operator=(otherScav);
    return (*this);  
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4V-TP уничтожен!" << std::endl;
}

void ScavTrap::challengeNewcomer(std :: string const & target)
{
    int randomVariable;
    int randomVariableTwo;
    
    std::string superAttack[] = {"Фильм", "Расследование", "Звонок убийце", "Помочник Патрушева", "Моргенштерн"};
    unsigned int damage[] = {2, 300, 110, 211, 421};
    if (this->getEnergyPoints() >= 25)
    {
        randomVariable = rand() % 5;
        randomVariableTwo = rand() % 5;
        std::cout << "SC4V-TP <" << this->getNameOfTrap() << "> используя <" << superAttack[randomVariable] << "> зафигачил <" <<
         target << "> и нанес ему " << damage[randomVariableTwo] << " урона" << std::endl;
    }
    else
        std::cout << "SC4V-TP <" << this->getNameOfTrap() << "> бомж энергии, не хватает ее, короче!" << std::endl;
}
