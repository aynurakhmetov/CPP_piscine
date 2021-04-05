/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:03:01 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/29 16:00:31 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
    std::string type;
public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();
    void announce();
    static std::string randomName();
};

#endif
