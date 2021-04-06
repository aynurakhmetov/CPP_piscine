/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:55 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/29 14:36:00 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie *newZombie (std :: string name);
    void randomChump();
};

#endif
