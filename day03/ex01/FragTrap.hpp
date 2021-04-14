/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:22 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/14 18:05:55 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>

class FragTrap
{
public:
    FragTrap(void);
    FragTrap(std::string);
    FragTrap(FragTrap const &);
    FragTrap &operator=(FragTrap const &);
    ~FragTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAtack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beReparired(unsigned int amount);
    void vaulthunter_dot_exe(std :: string const & target);
private:
unsigned int _hitPoints;
unsigned int _maxHitPoints;
unsigned int _energyPoints;
unsigned int _maxEnergyPoints;
unsigned int _level;
    std::string _name;
unsigned int _meleeAtackDamage;
unsigned int _rangedAttackDamage;
unsigned int _armorDamageReduction;
};

#endif