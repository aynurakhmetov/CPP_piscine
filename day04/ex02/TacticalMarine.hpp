/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:43:24 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 21:01:22 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine();
	TacticalMarine(TacticalMarine const &);
    TacticalMarine &operator=(TacticalMarine const  &);
	virtual ~TacticalMarine();
	virtual TacticalMarine  *clone() const;
	virtual void            battleCry() const;
	virtual void            rangedAttack() const;
	virtual void            meleeAttack() const;
};


#endif
