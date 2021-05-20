/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:13:29 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:56:44 by gmarva           ###   ########.fr       */
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
    ClapTrap(std::string n,unsigned int hp, unsigned int mHp, 
        unsigned int ep, unsigned int mEp, unsigned int lvl, unsigned int mDamage, 
        unsigned int rDamage, unsigned int arm);
    ClapTrap(ClapTrap const &);
    ClapTrap &operator=(ClapTrap const &);
    virtual ~ClapTrap(void);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beReparired(unsigned int amount);
    void setModelOfRobot(std::string);
    std::string getNameOfTrap();
    unsigned int getEnergyPoints();
private:
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string  _name;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;
    std::string  _modelOfRobot;
};

#endif