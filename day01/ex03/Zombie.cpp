/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:07 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/08 19:08:01 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    int numTypes;

    std::string types[] = {"Красивые", "Растения", "Роботы", "Рыбы", "Мутанты"};
    numTypes = rand() % 5;
    name = randomName();
    type = types[numTypes];
    std::cout << "Зомби <" << name << "(" << type << ")> создан" << std::endl;
}
 
Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    std::cout << "Зомби <" << name << "(" << type << ")> создан" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Зомби <" << name << "(" << type << ")> убит" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << name << "(" << type << ")> Мозгиииииии..." << std::endl;
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
