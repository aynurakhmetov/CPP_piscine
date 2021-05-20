/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:15:55 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 21:59:05 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
    Squad();
	Squad(Squad const  &);
    Squad &operator=(Squad const &);
    virtual ~Squad();
	virtual int             getCount() const;
	virtual ISpaceMarine*   getUnit(int) const;
	virtual int             push(ISpaceMarine*);
    void                    deletesquad();
private:
    int                     _count;
    ISpaceMarine            **_unit;
};

#endif
