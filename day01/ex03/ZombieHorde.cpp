/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:12 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/02 21:29:30 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    std::cout << "Сейчас будет орда зомби!" << std::endl;
    oneZombie = new Zombie[1];
    number = 1;
}

ZombieHorde::ZombieHorde(int number)
{
    std::cout << "Сейчас будет орда зомби!" << std::endl;
    oneZombie = new Zombie[number];
    this->number = number;
}

ZombieHorde::~ZombieHorde()
{
    delete [] oneZombie;
    std::cout << "Орда пала!" << std::endl;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < number; i++)
    {
        oneZombie[i].announce();
    }
}
