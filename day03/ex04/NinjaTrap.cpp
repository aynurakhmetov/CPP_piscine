/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:53:33 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 15:08:54 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("", 60, 60, 120, 120, 1, 60, 5, 0)
{
    this->setModelOfRobot("N1NJ4-TP");
    std::cout << "N1NJ4-TP создан" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    this->setModelOfRobot("N1NJ4-TP");
    std::cout << "N1NJ4-TP <" << name << "> создан" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copyNinja)
{
    std::cout << "Создана копия N1NJ4-TP" << std::endl;
    *this = copyNinja;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &otherNinja)
{
    std::cout << "N1NJ4-TP получил свойства другого N1NJ4-TP" << std::endl;
    ClapTrap::operator=(otherNinja);
    return (*this);  
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "N1NJ4-TP уничтожен!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
    std::cout << "N1NJ4-TP <" << this->getNameOfTrap() << "> встретил робота CL4P-TP по имени <" << clap.getNameOfTrap() << ">" << std::endl;
    std::cout << "Он ему не понравился, поэтому <" << this->getNameOfTrap() << "> наносит ему 10 урона" << std::endl;
    clap.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
    std::cout << "N1NJ4-TP <" << this->getNameOfTrap() << "> встретил робота FR4G-TP по имени <" << frag.getNameOfTrap() << ">" << std::endl;
    std::cout << "Он ему не понравился, поэтому <" << this->getNameOfTrap() << "> наносит ему 10 урона" << std::endl;
    frag.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
    std::cout << "N1NJ4-TP <" << this->getNameOfTrap() << "> встретил робота SC4V-TP  по имени <" << scav.getNameOfTrap() << ">" << std::endl;
    std::cout << "Он ему не понравился, поэтому <" << this->getNameOfTrap() << "> наносит ему 10 урона" << std::endl;
    scav.takeDamage(10);   
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
    std::cout << "N1NJ4-TP <" << this->getNameOfTrap() << "> встретил робота N1NJ4-TP по именм <" << ninja.getNameOfTrap() << ">" << std::endl;
    std::cout << "Он ему не понравился, поэтому <" << this->getNameOfTrap() << "> наносит ему 10 урона" << std::endl;
    ninja.takeDamage(10);
}
