/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:38:37 by gmarva            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/02 23:38:38 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Updated: 2021/04/06 23:21:25 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType (std::string type)
{
    this->_type = type;
}
>>>>>>> d0dee55091415ea9f0fd15098e08fa3ea7672685
