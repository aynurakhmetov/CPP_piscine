/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:49:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:14:54 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>

class ScavTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string);
    ScavTrap(ScavTrap const &);
    ScavTrap &operator=(ScavTrap const &);
    ~ScavTrap(void);
    void rangedAttack(std::string const &target);
    void meleeAtack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beReparired(unsigned int amount);
    void challengeNewcomer(std::string const &target);
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