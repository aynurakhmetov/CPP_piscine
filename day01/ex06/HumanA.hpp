/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:38:44 by gmarva            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/02 23:38:45 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Updated: 2021/04/06 23:30:03 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack( void );
};

#endif
>>>>>>> d0dee55091415ea9f0fd15098e08fa3ea7672685
