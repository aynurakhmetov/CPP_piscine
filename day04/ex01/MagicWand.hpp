/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicWand.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:29:40 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:31:22 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGICWAND_HPP
# define MAGICWAND_HPP
# include "AWeapon.hpp"

class MagicWand : public AWeapon
{
public:
    MagicWand();
    MagicWand(std::string const &name, int apcost, int damage);
    MagicWand(MagicWand const &);
    virtual ~MagicWand();
    MagicWand &operator=(const MagicWand &);
	virtual void attack() const;
private:
};

#endif
