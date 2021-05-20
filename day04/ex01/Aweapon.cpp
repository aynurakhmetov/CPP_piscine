/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:14:04 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:15:18 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _numDamagePoints(0), _costInActionPoints(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : 
    _name(name), _numDamagePoints(damage), _costInActionPoints(apcost)
{
}

AWeapon::AWeapon(AWeapon const  &copyWeapon)
{
    *this = copyWeapon;
}

AWeapon &AWeapon::operator=(AWeapon const &otherWeapon)
{
    this->_name = otherWeapon._name;
    this->_costInActionPoints = otherWeapon._costInActionPoints;
    this->_numDamagePoints = otherWeapon._numDamagePoints;
    return *this;
}

AWeapon::~AWeapon()
{
    std::cout << "AWeapon deleted" << std::endl;
}

std::string const AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getAPCost() const
{
    return this->_costInActionPoints;
}

int AWeapon::getDamage() const
{
    return this->_numDamagePoints;
}
