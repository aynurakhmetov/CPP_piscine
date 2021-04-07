/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:38:41 by gmarva            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/02 23:38:42 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Updated: 2021/04/06 23:19:53 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string _type);
    ~Weapon();
    const std::string &getType( void );
    void setType (std::string type);
};

#endif
>>>>>>> d0dee55091415ea9f0fd15098e08fa3ea7672685
