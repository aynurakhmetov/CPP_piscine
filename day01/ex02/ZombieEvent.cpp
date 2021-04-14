/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:58 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 14:08:19 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    std::cout << "Зомби событие началось" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "Зомби событие закончилось" << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *oneZombie = new Zombie(name, this->_type);
    return (oneZombie);
}

void ZombieEvent::randomChump()
{
    Zombie *oneZombie = newZombie(Zombie::randomName());
    oneZombie->announce();
	delete oneZombie;
}