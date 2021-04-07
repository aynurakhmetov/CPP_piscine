/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:38:46 by gmarva            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/02 23:38:47 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Updated: 2021/04/06 23:33:46 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    this->_name = name;
    //this->_weapon = weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
>>>>>>> d0dee55091415ea9f0fd15098e08fa3ea7672685
