/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicWand.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:29:47 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:47:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MagicWand.hpp"

MagicWand::MagicWand() : AWeapon("Magic Wand", 10, 100)
{
}

MagicWand::MagicWand(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

MagicWand::MagicWand(MagicWand const  &copyWeapon)
{
    *this = copyWeapon;
}

MagicWand &MagicWand::operator=(MagicWand const &otherWeapon)
{
    AWeapon::operator=(otherWeapon);
    return *this;
}

MagicWand::~MagicWand()
{
    std::cout << "Magic Wand deleted" << std::endl;
}

void MagicWand::attack() const
{
    std::cout << "* AVADA KEDAVRA *" << std::endl;
}
