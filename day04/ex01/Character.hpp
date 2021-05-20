/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:29:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 13:47:10 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
    Character();
	Character(std::string const &name);
    Character(Character const &);
	~Character();
    Character &operator=(Character const &);
	void        recoverAP();
	void        equip(AWeapon*);
	void        attack(Enemy*);
	std::string const getName() const;
    AWeapon     *getWeapon() const;
	int         getNumOfAP() const;
private:
    std::string _name;
    int         _numOfAp;
    AWeapon     *_weapon;
};

std::ostream &operator<<(std::ostream &, Character const &);

#endif
