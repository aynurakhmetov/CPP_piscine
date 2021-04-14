/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:13:29 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/14 22:05:41 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
public:
    ClapTrap(void);
    ClapTrap(std::string);
    ClapTrap(ClapTrap const &);
    ClapTrap &operator=(ClapTrap const &);
    ~ClapTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAtack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beReparired(unsigned int amount);
private:
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string  _name;
    unsigned int _meleeAtackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;
};

#endif