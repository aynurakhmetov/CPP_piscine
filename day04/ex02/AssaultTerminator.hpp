/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:01:31 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 21:02:04 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &);
    AssaultTerminator &operator=(AssaultTerminator const  &);
	virtual ~AssaultTerminator();
	virtual AssaultTerminator  *clone() const;
	virtual void            battleCry() const;
	virtual void            rangedAttack() const;
	virtual void            meleeAttack() const;
};


#endif