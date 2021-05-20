/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:21:50 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/10 12:21:42 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(Cure const &);
    Cure &operator=(Cure const &);
	virtual ~Cure();
    virtual void    use(ICharacter &);
    virtual Cure    *clone() const;
};
