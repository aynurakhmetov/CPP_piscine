/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:31:23 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 14:40:01 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(hp, type)
{
    std::cout << "* click click click" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copyEnemy)
{
	*this = copyEnemy;
    std::cout << "* click click click" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &otherEnemy) 
{
	Enemy::operator=(otherEnemy);
	return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "*SPROTCH *" << std::endl;
}
