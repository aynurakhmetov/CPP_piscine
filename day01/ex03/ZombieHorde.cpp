/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:12 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 16:00:50 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    std::cout << "Сейчас будет орда зомби!" << std::endl;
    this->_zombies = new Zombie[1];
    this->_number = 1;
}

ZombieHorde::ZombieHorde(int number)
{
    std::cout << "Сейчас будет орда зомби!" << std::endl;
    this->_zombies = new Zombie[number];
    this->_number = number;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombies;
    std::cout << "Орда пала!" << std::endl;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->_number; i++)
    {
        this->_zombies[i].announce();
    }
}
