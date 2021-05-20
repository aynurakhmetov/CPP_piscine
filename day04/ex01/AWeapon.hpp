/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:14:00 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 12:11:57 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>

class AWeapon
{
public:
    AWeapon();
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon const  &);
    AWeapon &operator=(AWeapon const &);
	virtual ~AWeapon();
	std::string const   getName() const;
	int                 getAPCost() const;
	int                 getDamage() const;
	virtual void        attack() const = 0;
private:
    std::string         _name;
    int                 _numDamagePoints;
    int                 _costInActionPoints;
};  

#endif
