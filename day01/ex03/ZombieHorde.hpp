/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:10 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/29 19:06:02 by gmarva           ###   ########.fr       */
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