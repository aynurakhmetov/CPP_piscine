/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:03:03 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 14:06:22 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    int numTypes;

    std::string types[] = {"1", "2", "3", "4", "5"};
    numTypes = rand() % 5;
    this->_name = randomName();
    this->_type = types[numTypes];
    std::cout << "Зомби <" << _name << "(" << _type << ")> создан" << std::endl;
}
 
Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    std::cout << "Зомби <" << name << "(" << type << ")> создан" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Зомби <" << _name << "(" << _type << ")> убит" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << _name << "(" << _type << ")> Мозгиииииии..." << std::endl;
}

std::string Zombie::randomName()
{
    int numNames;
    std::string newName;

    std::string names[] = {"Айнур", "Ильнур", "Шамиль", "Руслан", "Аделя"};
    numNames = rand() % 5;
    newName = names[numNames];
    return (newName);
}
