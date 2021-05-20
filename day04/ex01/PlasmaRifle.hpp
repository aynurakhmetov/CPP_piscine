/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:34:55 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 12:33:09 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(std::string const &name, int apcost, int damage);
    PlasmaRifle(PlasmaRifle const &);
    virtual ~PlasmaRifle();
    PlasmaRifle &operator=(const PlasmaRifle &);
	virtual void attack() const;
private:
};

#endif
