/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:37:43 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:16:13 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PowerFist::PowerFist(PowerFist const  &copyWeapon)
{
    *this = copyWeapon;
}

PowerFist &PowerFist::operator=(PowerFist const &otherWeapon)
{
    AWeapon::operator=(otherWeapon);
    return *this;
}

PowerFist::~PowerFist()
{
    std::cout << "Power Fist deleted" << std::endl;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}