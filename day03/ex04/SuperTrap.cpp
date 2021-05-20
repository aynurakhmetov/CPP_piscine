/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:52:41 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 17:14:36 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap("", 100, 100, 120, 120, 1, 60, 20, 5)
{
    this->setModelOfRobot("SUP3R-TP");
    std::cout << "SUP3R-TP создан" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
    this->setModelOfRobot("SUP3R-TP");
    std::cout << "SUP3R-TP <" << name << "> создан" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copySuper)
{
    std::cout << "Создана копия SUP3R-TP" << std::endl;
    *this = copySuper;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &otherSuper)
{
    std::cout << "SUP3R-TP получил свойства другого SUP3R-TP" << std::endl;
    ClapTrap::operator=(otherSuper);
    return (*this);  
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "SUP3R-TP уничтожен!" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target) {
	this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	this->NinjaTrap::meleeAttack(target);
}
