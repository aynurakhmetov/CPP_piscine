/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:37:38 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:15:31 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const  &copyWeapon)
{
    *this = copyWeapon;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &otherWeapon)
{
    AWeapon::operator=(otherWeapon);
    return *this;
}

PlasmaRifle::~PlasmaRifle()
{
    std::cout << "Plazma Rifle deleted" << std::endl;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
