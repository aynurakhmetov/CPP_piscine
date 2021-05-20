/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:09:17 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/11 14:10:34 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
    AMateria(void);
	AMateria(std::string const &type);
    AMateria(AMateria const &);
    AMateria &operator=(AMateria const &);
	virtual ~AMateria();
	std::string const   &getType() const; //Returns the materia type
	unsigned int        getXP() const; //Returns the Materia's XP
    virtual void        use(ICharacter &);
    virtual AMateria    *clone() const = 0;
private:
    std::string  _type;
	unsigned int _xp;
};

#endif
