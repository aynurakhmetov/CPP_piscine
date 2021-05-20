/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DarkLord.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:33:54 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:37:21 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARKLORD_HPP
# define DARKLORD_HPP
# include "Enemy.hpp"

class DarkLord : public Enemy
{
public:
    DarkLord();
	DarkLord(int hp, std::string const &type);
    DarkLord(DarkLord const &);
	virtual ~DarkLord();
    DarkLord	&operator=(DarkLord const &);
	virtual void takeDamage(int);
private:
};

#endif