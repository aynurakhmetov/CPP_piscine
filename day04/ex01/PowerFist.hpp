/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:37:46 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 12:33:26 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(std::string const &name, int apcost, int damage);
    PowerFist(PowerFist const &);
    virtual ~PowerFist();
    PowerFist &operator=(const PowerFist &);
	virtual void attack() const;
private:
};

#endif
