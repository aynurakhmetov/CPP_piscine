/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:21:24 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/10 12:19:30 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(Ice const &);
    Ice &operator=(Ice const &);
	virtual ~Ice();
    virtual void    use(ICharacter &);
    virtual Ice    *clone() const;
};
