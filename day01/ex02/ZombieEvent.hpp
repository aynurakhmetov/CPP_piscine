/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:55 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 14:07:40 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string _type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie *newZombie (std::string name);
    void randomChump();
};

#endif
