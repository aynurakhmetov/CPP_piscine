/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DarkLord.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:34:29 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:36:47 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DarkLord.hpp"

DarkLord::DarkLord() : Enemy(300, "Lord Voldemort")
{
    std::cout << "Tom Marvolo Riddle is born" << std::endl;
}

DarkLord::DarkLord(int hp, std::string const &type) : Enemy(hp, type)
{
    std::cout << "Tom Marvolo Riddle is born" << std::endl;
}

DarkLord::DarkLord(DarkLord const &copyEnemy)
{
	*this = copyEnemy;
    std::cout << "Tom Marvolo Riddle is born" << std::endl;
}

DarkLord	&DarkLord::operator=(const DarkLord &otherEnemy) 
{
	Enemy::operator=(otherEnemy);
	return (*this);
}

DarkLord::~DarkLord()
{
    std::cout << "Nu, Harry Potter, Nu PAGADiiiiiiii..." << std::endl;
}

void DarkLord::takeDamage(int amount)
{
    if (amount >= 10)
    {
        amount -= 10;
        Enemy::takeDamage(amount);
    }
    else
        return;
}
