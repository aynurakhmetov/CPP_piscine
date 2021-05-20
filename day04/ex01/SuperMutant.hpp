/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:59:44 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 13:00:06 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
	SuperMutant(int hp, std::string const &type);
    SuperMutant(SuperMutant const &);
	virtual ~SuperMutant();
    SuperMutant	&operator=(SuperMutant const &);
	virtual void takeDamage(int);
private:
};

#endif