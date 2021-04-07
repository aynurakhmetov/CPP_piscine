/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:38:49 by gmarva            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/02 23:38:50 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Updated: 2021/04/06 23:29:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack( void );
};

#endif
>>>>>>> d0dee55091415ea9f0fd15098e08fa3ea7672685
