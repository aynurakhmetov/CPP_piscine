/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:10 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/08 19:08:54 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
    Zombie *oneZombie;
    int number;
public:
    ZombieHorde();
    ZombieHorde(int number);
    ~ZombieHorde();
    void announce();
};

#endif