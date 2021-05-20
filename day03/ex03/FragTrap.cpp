/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:00 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:49:37 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("", 100, 100, 100, 100, 1, 30, 20, 5)
{
    this->setModelOfRobot("FR4G-TP");
    std::cout << "FR4G-TP создан" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    this->setModelOfRobot("FR4G-TP");
    std::cout << "FR4G-TP <" << name << "> создан" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copyFrag)
{
    std::cout << "Создана копия FR4G-TP" << std::endl;
    *this = copyFrag;
}

FragTrap &FragTrap::operator=(FragTrap const &otherFrag)
{
    std::cout << "FR4G-TP получил свойства другого FR4G-TP" << std::endl;
    ClapTrap::operator=(otherFrag);
    return (*this);  
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP уничтожен!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std :: string const &target)
{
    int randomVariable;
    int randomVariableTwo;
    
    std::string superAttack[] = {"Война", "Искателей", "Разбойников Пандоры", "Красивое слово", "Мудрость"};
    unsigned int damage[] = {1, 200, 10, 21, 42};
    if (this->getEnergyPoints() >= 25)
    {
        randomVariable = rand() % 5;
        randomVariableTwo = rand() % 5;
        std::cout << "FR4G-TP <" << this->getNameOfTrap() << "> используя <" << superAttack[randomVariable] << "> атаковал <" <<
         target << "> и нанес ему " << damage[randomVariableTwo] << " урона" << std::endl;
    }
    else
        std::cout << "FR4G-TP <" << this->getNameOfTrap() << "> не имеет достаточного колиечства энергии для этой процедуры'!" << std::endl;
}
